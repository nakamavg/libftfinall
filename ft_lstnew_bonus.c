/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-m <aecm.davidgomez@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 03:37:12 by dgomez-m          #+#    #+#             */
/*   Updated: 2023/12/02 05:10:12 by dgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_list;

	new_list = malloc(sizeof(struct s_list));
	if (!new_list)
		return (NULL);
	new_list -> content = content;
	new_list -> next = NULL;
	return (new_list);
}
