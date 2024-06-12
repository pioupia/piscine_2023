/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <pioupia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:13:04 by pioupia           #+#    #+#             */
/*   Updated: 2024/06/12 11:04:37 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	plus(int a, int b)
{
	ft_putnbr(a + b, 0);
}

void	minus(int a, int b)
{
	ft_putnbr(a - b, 0);
}

void	divid(int a, int b)
{
	if (b == 0)
		ft_putstr("Stop : division by zero\n");
	else
		ft_putnbr(a / b, 0);
}

void	multiply(int a, int b)
{
	ft_putnbr(a * b, 0);
}

void	modulo(int a, int b)
{
	if (b == 0)
		ft_putstr("Stop : modulo by zero\n");
	else
		ft_putnbr(a % b, 0);
}
