/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-m <aecm.davidgomez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 00:03:00 by dgomez-m          #+#    #+#             */
/*   Updated: 2023/12/13 00:33:16 by dgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index;
	size_t	needle_index;

	if (*needle == '\0')
		return ((char *)haystack);
	index = 0;
	while (index < len && haystack[index])
	{
		needle_index = 0;
		while (haystack[index + needle_index] == needle[needle_index]
			&& (index + needle_index) < len)
		{
			needle_index++;
			if (!needle[needle_index])
				return ((char *)&haystack[index]);
		}
		index++;
	}
	return (NULL);
}
