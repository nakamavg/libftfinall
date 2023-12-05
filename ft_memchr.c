/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-m <aecm.davidgomez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 01:19:59 by dgomez-m          #+#    #+#             */
/*   Updated: 2023/11/26 04:52:20 by dgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
MAN memchr
NAME
		memchr – locate byte in byte string

LIBRARY
		Standard C Library (libc, -lc)

SYNOPSIS
		#include <string.h>

		void *
		memchr(const void *s, int c, size_t n);

DESCRIPTION
		The memchr() function locates the first occurrence of c
		(converted to an unsigned char) in string s.

RETURN VALUES
		The memchr() function returns a pointer to the byte located,
			or NULL if no such byte exists within n bytes.
*/
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
