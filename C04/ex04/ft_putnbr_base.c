/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <pioupia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 08:55:50 by pioupia           #+#    #+#             */
/*   Updated: 2024/06/12 11:04:37 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_get_base_count(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

void	ft_print_array(char *nbr, int size)
{
	int		i;
	int		started;

	i = 0;
	started = 0;
	while (i < size)
	{
		if (!started && nbr[i] != '\0')
			started = 1;
		if (started)
			write(1, &nbr[i], 1);
		i++;
	}
}

void	ft_fill_array(char *nbr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		nbr[i] = '\0';
		i++;
	}
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	if (!base || *base == '\0' || *(base + 1) == '\0')
		return (0);
	i = 0;
	j = 1;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j] != '\0')
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_max_char;
	char	res_list[32];
	int		i;
	int		mod;

	i = 0;
	base_max_char = ft_get_base_count(base);
	ft_fill_array(res_list, 32);
	if (ft_check_base(base))
	{
		if (nbr < 0)
			write(1, "-", 1);
		while (nbr / base_max_char != 0)
		{
			mod = nbr % base_max_char;
			if (mod < 0)
				mod = -mod;
			res_list[31 - (i++)] = base[mod];
			nbr /= base_max_char;
		}
		if (nbr < 0)
			nbr = -nbr;
		res_list[31 - i] = base[nbr];
		ft_print_array(res_list, 32);
	}
}
