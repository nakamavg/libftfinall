/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-m <aecm.davidgomez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 06:25:06 by dgomez-m          #+#    #+#             */
/*   Updated: 2023/12/04 21:12:41 by dgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str1;
	char	c_copy;
	size_t	index;

	index = 0;
	str1 = (char *)s;
	c_copy = c;
	while (str1[index] != c_copy)
	{
		if (str1[index] == '\0')
			return (NULL);
		index++;
	}
	return ((char *)str1 + index);
}
