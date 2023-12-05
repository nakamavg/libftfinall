/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-m <aecm.davidgomez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 03:28:11 by dgomez-m          #+#    #+#             */
/*   Updated: 2023/11/27 04:49:34 by dgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_temp;
	unsigned char	*src_temp;

	if (!dst && !src)
		return (NULL);
	dst_temp = (unsigned char *)dst;
	src_temp = (unsigned char *)src;
	if (src_temp < dst_temp && dst_temp < src_temp + len)
		while (len--)
			dst_temp[len] = src_temp[len];
	else
		while (len--)
			*(dst_temp++) = *(src_temp++);
	return (dst);
}
