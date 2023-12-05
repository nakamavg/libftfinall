/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-m <aecm.davidgomez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 04:33:45 by dgomez-m          #+#    #+#             */
/*   Updated: 2023/11/30 03:21:32 by dgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newstring;
	size_t	start;
	size_t	lens1;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	lens1 = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	if (start == lens1 + 1)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[lens1]))
		lens1--;
	newstring = ft_substr(s1, start, lens1 - start + 1);
	if (!newstring)
		return (NULL);
	return (newstring);
}
