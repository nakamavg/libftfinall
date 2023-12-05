/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-m <aecm.davidgomez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:32:28 by dgomez-m          #+#    #+#             */
/*   Updated: 2023/11/27 23:51:52 by dgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		dst_len;
	size_t		src_len;
	size_t		index;

	if (!size)
		return (ft_strlen(src) + size);
	src_len = ft_strlen(src);
	index = 0;
	while (dst[index] && index < size)
		index++;
	dst_len = index;
	while (src[index - dst_len] && index < size - 1)
	{
		dst[index] = src[index - dst_len];
		index++;
	}
	if (dst_len < size)
		dst[index] = '\0';
	return (dst_len + src_len);
}
