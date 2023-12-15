/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-m <aecm.davidgomez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 00:39:02 by dgomez-m          #+#    #+#             */
/*   Updated: 2023/12/14 14:14:37 by dgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const unsigned char	*src2;
	unsigned char		*dst2;

	if ((dst == NULL && src == NULL))
		return (dst);
	src2 = (const unsigned char *)src;
	dst2 = (unsigned char *)dst;
	while (n--)
		*dst2++ = *src2++;
	return (dst);
}
