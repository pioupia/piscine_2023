/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <pioupia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:26:56 by pioupia           #+#    #+#             */
/*   Updated: 2024/06/13 13:28:01 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_white_space(char str)
{
	if (str == '\t' || str == '\n' || str == '\v' || str == '\f'
		|| str == '\r' || str == ' ')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;
	int	is_negative;

	i = 0;
	is_negative = 0;
	nbr = 0;
	while (ft_is_white_space(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			is_negative = (is_negative + 1) % 2;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	if (is_negative)
		nbr = -nbr;
	return (nbr);
}
