/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <pioupia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:10:27 by pioupia           #+#    #+#             */
/*   Updated: 2024/06/12 11:06:05 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_verify_number_sign(int *nb)
{
	if (*nb < 0)
	{
		write(1, &"-", 1);
		if (*nb == -2147483648)
		{
			write(1, "2147483648", 10);
			return (0);
		}
		else
			*nb = -(*nb);
	}
	return (1);
}

void	ft_print_int_array(int *nb, int size)
{
	int		i;
	int		started;
	char	to_print;

	i = 0;
	started = 0;
	while (i < size)
	{
		if (nb[i] != 0 && !started)
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

void	ft_reset_numbers(int *nb, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		nb[i] = 0;
		i++;
	}
}

void	ft_putnbr(int nb)
{
	int	numbers[10];
	int	i;

	i = 0;
	if (ft_verify_number_sign(&nb))
	{
		ft_reset_numbers(numbers, 10);
		while (nb / 10 > 0)
		{
			numbers[(9 - i++)] = nb % 10;
			nb /= 10;
		}
		numbers[9 - i] = nb;
		ft_print_int_array(numbers, 10);
	}
}
