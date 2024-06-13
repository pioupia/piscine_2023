/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <pioupia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 08:48:35 by pioupia           #+#    #+#             */
/*   Updated: 2024/06/13 14:09:20 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_white_space(char str)
{
	if (str == '\t' || str == '\n' || str == '\v' || str == '\f'
			|| str == '\r' || str == ' ')
		return (1);
	return (0);
}

int ft_verify_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
	{
		if (ft_is_white_space(base[i]) ||
			base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int ft_find_index(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	nbr;
	int	is_negative;
	int	base_len;

	if ((base_len = ft_verify_base(base)) < 2)
		return (0);
	i = 0;
	is_negative = 0;
	nbr = 0;
	while (ft_is_white_space(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			is_negative = (is_negative + 1) % 2;
	while (ft_find_index(str[i], base) != -1)
	{
		nbr = nbr * base_len + ft_find_index(str[i], base);
		i++;
	}
	if (is_negative)
		nbr = -nbr;
	return (nbr);
}
