/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-m <aecm.davidgomez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 04:44:08 by dgomez-m          #+#    #+#             */
/*   Updated: 2023/12/12 22:20:44 by dgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_int_len(long n)
{
	long	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_recursive_itoa(long n, char *result)
{
	long	len;

	if (n < 0)
	{
		*result = '-';
		ft_recursive_itoa(-n, result + 1);
	}
	else if (n >= 10)
	{
		ft_recursive_itoa(n / 10, result);
		len = ft_get_int_len(n / 10);
		result += len;
		*result = '0' + (n % 10);
	}
	else
	{
		*result = '0' + n;
	}
}

char	*ft_itoa(int n)
{
	char	*result;
	long	len;

	len = ft_get_int_len(n);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	ft_recursive_itoa(n, result);
	result[len] = '\0';
	return (result);
}
