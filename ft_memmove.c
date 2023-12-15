/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-m <aecm.davidgomez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 03:28:11 by dgomez-m          #+#    #+#             */
/*   Updated: 2023/12/15 06:31:12 by dgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

static void	cpy_start_end(unsigned char *dst, unsigned char *src, size_t len)
{
	while (len--)
		*(dst++) = *(src++);
}

static void	cpy_end_start(unsigned char *dst,  unsigned char *src, size_t len)
{
	while (len--)
		dst[len] = src[len];
}

void	*ft_memmove(void *dst, const void *src, size_t len)

{
	unsigned char	*dst_tmp;
	unsigned char	*src_tmp;

	if (!dst && !src)
		return (NULL);
	dst_tmp = (unsigned char *)dst;
	src_tmp = (unsigned char *)src;
	if (src_tmp < dst_tmp && dst_tmp < src_tmp + len)
		cpy_end_start(dst_tmp, src_tmp, len);
	else
		cpy_start_end(dst_tmp, src_tmp, len);
	return (dst);
}

