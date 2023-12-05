/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-m <aecm.davidgomez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 00:39:02 by dgomez-m          #+#    #+#             */
/*   Updated: 2023/11/26 04:52:20 by dgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const unsigned char	*source;
	unsigned char		*destiny;
	unsigned char		character;
	size_t				i;

	i = 0;
	source = (const unsigned char *)src;
	destiny = (unsigned char *)dst;
	character = (unsigned char)c;
	while (i < n)
	{
		destiny[i] = source[i];
		if (source[i] == character)
		{
			return ((void *)dst + i + 1);
		}
		i++;
	}
	return (NULL);
}
