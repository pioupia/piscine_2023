/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <pioupia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 08:49:19 by pioupia           #+#    #+#             */
/*   Updated: 2024/06/12 11:04:37 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	last_n;

	i = 1;
	last_n = nb % 10;
	if (nb < 0)
		return (0);
	if (last_n == 2 || last_n == 3 || last_n == 7 || last_n == 8 || nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i <= nb / 2)
	{
		if (nb % i == 0 && nb / i == i)
			return (i);
		i++;
	}
	return (0);
}
