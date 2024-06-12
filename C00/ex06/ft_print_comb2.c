/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <pioupia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:49:15 by pioupia           #+#    #+#             */
/*   Updated: 2024/06/12 11:04:37 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_print_numbers(char a, char b, char *c, char *d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &" ", 1);
	write(1, c, 1);
	write(1, d, 1);
	if (a != '9' || b != '8')
		write(1, &", ", 2);
}

void	ft_increment_right_numbers(char a, char b, char *c, char *d)
{
	char	nine;
	char	*nine_number;

	nine = '9';
	nine_number = &nine;
	while (*c <= *nine_number)
	{
		while (*d <= *nine_number)
		{
			ft_print_numbers(a, b, c, d);
			(*d)++;
		}
		(*c)++;
		*d = '0';
	}
	*c = a;
	*d = b + 2;
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	while (a <= '9')
	{
		while (b <= '9')
		{
			ft_increment_right_numbers(a, b, &c, &d);
			b++;
		}
		a++;
		b = '0';
		c = a;
		d = b + 1;
	}
}
