/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   console.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <pioupia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:20:21 by pioupia           #+#    #+#             */
/*   Updated: 2024/06/12 11:04:37 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

void	ft_putnbr(int nbr, int has_loop)
{
	char	to_print;

	if (nbr == -2147483648)
	{
		write(1, "-2", 2);
		ft_putnbr(147483648, 1);
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nbr, 1);
	}
	else if (nbr >= 0 && nbr <= 9)
	{
		to_print = nbr + '0';
		write(1, &to_print, 1);
	}
	else
	{
		ft_putnbr(nbr / 10, 1);
		ft_putnbr(nbr % 10, 1);
	}
	if (!has_loop)
		write(1, "\n", 1);
}
