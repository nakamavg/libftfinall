/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-m <aecm.davidgomez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 03:28:11 by dgomez-m          #+#    #+#             */
/*   Updated: 2023/12/14 23:37:35 by dgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	cpy_start_end(unsigned char *dst, unsigned char *src, size_t len)
{
	while (len--)
		*(dst++) = *(src++);
}

static void	cpy_end_start(unsigned char *dst, unsigned char *src, size_t len)
{
	while (len--)
		dst[len] = src[len];
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_temp;
	unsigned char	*src_temp;

	if (!dst && !src)
		return (NULL);
	dst_temp = (unsigned char *)dst;
	src_temp = (unsigned char *)src;
	if (src_temp < dst_temp)
		cpy_start_end(dst_temp, src_temp, len);
	else
		cpy_end_start(dst_temp, src_temp, len);
	return (dst);
}
