/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-m <aecm.davidgomez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 06:47:48 by dgomez-m          #+#    #+#             */
/*   Updated: 2023/12/15 04:31:14 by dgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str1;
	int		len;

	str1 = (char *)s;
	len = ft_strlen(s);
	while (len != 0)
	{
		if (str1[len] == (char)c)
			return (str1 + len);
		len--;
	}
	if (s[0] == (char)c)
		return (str1);
	return (0);
}
