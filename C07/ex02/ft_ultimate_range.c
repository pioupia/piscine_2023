/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <pioupia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:25:16 by pioupia           #+#    #+#             */
/*   Updated: 2024/06/12 11:04:37 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	count;
	int	*tab;

	i = 0;
	count = max - min;
	if (count <= 0)
	{
		*range = ((void *)0);
		return (0);
	}
	tab = malloc(count * sizeof(int));
	if (tab == NULL)
		return (-1);
	while (i < count)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (count);
}
