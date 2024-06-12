/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <pioupia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:16:13 by pioupia           #+#    #+#             */
/*   Updated: 2024/06/12 11:04:37 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_print_char(char left, char middle, char right)
{
	write(1, &left, 1);
	write(1, &middle, 1);
	write(1, &right, 1);
	if (left != '7')
	{
		write(1, &", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	left;
	char	middle;
	char	right;

	left = '0';
	middle = '1';
	right = '2';
	while (left <= '7')
	{
		while (middle <= '8')
		{
			while (right <= '9')
			{
				ft_print_char(left, middle, right);
				right++;
			}
			middle++;
			right = middle + 1;
		}
		left++;
		middle = left + 1;
		right = middle + 1;
	}
}
