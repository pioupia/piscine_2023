/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <pioupia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:08:03 by pioupia           #+#    #+#             */
/*   Updated: 2024/06/12 11:04:37 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	*ft_range(int min, int max)
{
	int	*numbers;
	int	i;
	int	count;

	count = max - min;
	if (count <= 0)
		return (0);
	numbers = malloc(count * sizeof(int));
	i = 0;
	while (i < count)
	{
		numbers[i] = min + i;
		i++;
	}
	return (numbers);
}
