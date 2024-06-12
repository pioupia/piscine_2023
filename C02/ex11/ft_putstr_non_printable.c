/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <pioupia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 16:13:00 by pioupia           #+#    #+#             */
/*   Updated: 2024/06/12 11:04:37 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_str_is_printable(char *str)
{
	if (*str < 32 || *str > 126)
		return (0);
	return (1);
}

char	*ft_decimal_to_hex(int n)
{
	int			reste;
	int			i;
	static char	str[4];

	i = 2;
	str[0] = '\\';
	if (n <= 15)
		str[1] = '0';
	while (n > 0)
	{
		reste = n % 16;
		if (reste >= 10)
			str[i--] = reste + 87;
		else
			str[i--] = reste + 48;
		n = n / 16;
	}
	str[3] = '\0';
	return (str);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	*ft_swap(char *str)
{
	int		i;
	char	temp;

	i = 0;
	while (i < 2)
	{
		temp = str[3 - i];
		str[3 - i] = str[i];
		str[i] = temp;
		i++;
	}
	return (str);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_str_is_printable(&str[i]))
			ft_putstr(ft_decimal_to_hex(str[i]));
		else
			write(1, &str[i], 1);
		i++;
	}	
}
