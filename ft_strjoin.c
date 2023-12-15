/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-m <aecm.davidgomez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 01:11:33 by dgomez-m          #+#    #+#             */
/*   Updated: 2023/12/15 04:29:41 by dgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	lens1;
	size_t	lens2;
	size_t	lens_dst;
	char	*new_string;

	if (!s1 || !s2)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	lens_dst = lens1 + lens2 + 1 ;
	new_string = ft_calloc(sizeof(char), lens_dst);
	if (!new_string)
		return (NULL);
	ft_memcpy(new_string, s1, lens1);
	ft_memcpy(new_string + lens1, s2, lens2);
	return (new_string);
}
