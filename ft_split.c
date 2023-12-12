/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-m <aecm.davidgomez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 04:11:06 by dgomez-m          #+#    #+#             */
/*   Updated: 2023/12/12 17:03:53 by dgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strndup(const char *s1, size_t n)
{
	size_t	len;
	char	*str;

	len = 0;
	while (len < n && s1[len] != '\0')
		len++;
	str = ft_calloc(sizeof(char), len + 1);
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, len);
	str[len] = '\0';
	return (str);
}

static int	ft_getnumberstrings(char const *s, char c)
{
	int	index;
	int	numberstr;

	index = 0;
	numberstr = 0;
	while (s[index])
	{
		while (s[index] == c)
			index++;
		if (s[index] != c && s[index] != '\0')
		{
			numberstr++;
		}
		while (s[index] != c && s[index] != '\0')
			index++;
	}
	return (numberstr);
}

static int	ft_getlenstrings(char const *s, char c)
{
	int	index;
	int	lenstr;

	index = 0;
	lenstr = 0;
	while (s[index] && s[index] == c)
		index++;
	while (s[index] && s[index] != c)
	{
		lenstr++;
		index++;
	}
	return (lenstr);
}

static int	ft_get_substrings(char const *s, char c, char **substrings,
		int num_str)
{
	int	index;
	int	len;

	index = 0;
	while (index < num_str)
	{
		while (*s == c)
			s++;
		len = ft_getlenstrings(s, c);
		substrings[index] = ft_strndup(s, len);
		if (!substrings[index])
			return (0);
		s += len;
		index++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		num_str;
	char	**substrings;

	if (!s)
		return (NULL);
	num_str = ft_getnumberstrings(s, c);
	substrings = ft_calloc(num_str + 1, sizeof(char *));
	if (!substrings)
		return (NULL);
	if (!ft_get_substrings(s, c, substrings, num_str))
	{
		while (num_str > 0)
			free(substrings[--num_str]);
		free(substrings);
		return (NULL);
	}
	substrings[num_str] = NULL;
	return (substrings);
}
