/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <pioupia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:09:37 by pioupia           #+#    #+#             */
/*   Updated: 2024/06/12 11:04:37 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	atoi(char *str);

int	is_operator(char *operator)
{
	char	op;

	if (operator[1] != '\0')
		return (-1);
	op = operator[0];
	if (op == '+')
		return (0);
	if (op == '-')
		return (1);
	if (op == '/')
		return (2);
	if (op == '*')
		return (3);
	if (op == '%')
		return (4);
	return (-1);
}

void	generate_functions_array(int a, int b, int op)
{
	void	(*f[5])(int, int);

	f[0] = &plus;
	f[1] = &minus;
	f[2] = &divid;
	f[3] = &multiply;
	f[4] = &modulo;
	f[op](a, b);
}

int	main(int argc, char **argv)
{
	int	a;
	int	b;
	int	op;

	if (argc != 4)
		return (1);
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = is_operator(argv[2]);
	if (op == -1)
	{
		write(1, "0\n", 2);
		return (0);
	}
	generate_functions_array(a, b, op);
	return (0);
}
