/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <pioupia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:15:40 by pioupia           #+#    #+#             */
/*   Updated: 2024/06/12 11:04:37 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_smallest_number(int *tab, int size, int start)
{
	int	min;
	int	min_position;

	min = *(tab + start);
	min_position = start;
	while (start < size)
	{
		if (min > *(tab + start))
		{
			min = *(tab + start);
			min_position = start;
		}
		start++;
	}
	return (min_position);
}

void	ft_swap(int *tab, int first_index, int second_index)
{
	int	c;

	c = *(tab + first_index);
	tab[first_index] = *(tab + second_index);
	tab[second_index] = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	min_pos;

	i = 0;
	while (i < size - 1)
	{
		min_pos = ft_find_smallest_number(tab, size, i);
		if (min_pos != i)
		{
			ft_swap(tab, i, +min_pos);
		}
		i++;
	}
}
