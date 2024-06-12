/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <pioupia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 09:05:00 by pioupia           #+#    #+#             */
/*   Updated: 2024/06/12 11:04:37 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

{
	int	i;
	int	last_n;

	i = 1;
	last_n = nb % 10;
	if (last_n == 2 || last_n == 3 || last_n == 7 || last_n == 8 || nb == 0)
		return (nb / 2);
	while (i <= nb / 2)
	{
		if (nb % i == 0 && nb / i == i)
			return (i);
		i++;
	}
	return (nb / 2);
}

int	ft_is_prime(int nb)
{
	int	up_to;
	int	i;

	if (nb == 0 || nb == 1 || nb == -1 || nb == -2147483648)
		return (0);
	if (nb < 2)
		nb = -nb;
	up_to = ft_sqrt(nb);
	i = 2;
	while (i <= up_to)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
