/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <pioupia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 14:42:59 by pioupia           #+#    #+#             */
/*   Updated: 2024/06/14 14:44:31 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stddef.h>

void ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*element;

	if (!begin_list)
		return ;
	element = ft_create_elem(data);
	if (element == NULL)
		return ;
	element->next = *begin_list;
	*begin_list = element;
}
