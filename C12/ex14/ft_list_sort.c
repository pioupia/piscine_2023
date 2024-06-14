/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <pioupia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 14:42:59 by pioupia           #+#    #+#             */
/*   Updated: 2024/06/14 17:06:33 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"


void ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*tmp;
	t_list	*tmp2;
	t_list	*min;
	void	*tmp_data;

	if (!begin_list || !*begin_list || !(*begin_list)->next ||
		!cmp)
		return ;
	tmp = *begin_list;
	while (tmp->next)
	{
		tmp2 = tmp->next;
		min = tmp;
		while(tmp2)
		{
			if (cmp(tmp2->data, min->data) < 0)
				min = tmp2;
			tmp2 = tmp2->next;
		}
		tmp_data = tmp->data;
		tmp->data = min->data;
		min->data = tmp_data;
		tmp = tmp->next;
	}
}
