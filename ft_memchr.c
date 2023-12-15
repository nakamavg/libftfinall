/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-m <aecm.davidgomez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 01:19:59 by dgomez-m          #+#    #+#             */
/*   Updated: 2023/12/15 02:43:53 by dgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*pointer;
	size_t				index;

	index = 0;
	pointer = (unsigned char *)(s);
	while (n > index)
	{
		if (pointer[index] == (unsigned char)(c))
			return ((void *)&pointer[index]);
		index++;
	}
	return (NULL);
}
