/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <pioupia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 14:27:27 by pioupia           #+#    #+#             */
/*   Updated: 2024/06/12 11:04:37 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_absolute_value(int *nb)
{
	if (*nb < 0)
	{
		write(1, "-", 1);
		if (*nb == -2147483648)
		{
			write(1, "2147483648", 10);
			return (0);
		}
		*nb = -(*nb);
	}
	return (1);
}

void	ft_generate_empty_int_array(int *nb, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		nb[i] = 0;
		i++;
	}
}

void	ft_print_int(int *nb, int size)
{
	int		i;
	int		started;
	char	to_print;

	i = 0;
	started = 0;
	while (i < size)
	{
		if (!started && nb[i] != 0)
			started = 1;
		if (started)
		{
			to_print = nb[i] + '0';
			write(1, &to_print, 1);
		}
		i++;
	}
	if (!started)
		write(1, "0", 1);
}

void	ft_putnbr(int nb)
{
	int	numbers[10];
	int	i;

	i = 0;
	if (ft_absolute_value(&nb))
	{
		ft_generate_empty_int_array(numbers, 10);
		while (nb / 10 > 0)
		{
			numbers[9 - (i++)] = nb % 10;
			nb /= 10;
		}
		numbers[9 - i] = nb;
		ft_print_int(numbers, 10);
	}
}
