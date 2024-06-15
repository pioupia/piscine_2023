/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <pioupia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 14:42:59 by pioupia           #+#    #+#             */
/*   Updated: 2024/06/15 11:11:47 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_remove_el(t_list *element, void (*free_fct)(void *))
{
	t_list	*tmp;

	tmp = element->next->next;
	if (free_fct)
		free_fct(element->next->data);
	free(element->next);
	element->next = tmp;
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*tmp;

	if (!begin_list || !*begin_list || !cmp)
		return ;
	tmp = *begin_list;
	while (tmp->next)
	{
		if (cmp(tmp->next->data, data_ref) == 0)
			ft_remove_el(tmp, free_fct);
		else
			tmp = tmp->next;
	}
	if (cmp((*begin_list)->data, data_ref) == 0)
	{
		tmp = *begin_list;
		*begin_list = (*begin_list)->next;
		if (free_fct)
			free_fct(tmp->data);
		free(tmp);
	}
}
