/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <pioupia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 05:27:32 by pioupia           #+#    #+#             */
/*   Updated: 2024/06/12 11:04:37 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	res;
	int	i;
	int	has_to_break;

	i = 0;
	res = 0;
	has_to_break = 0;
	while (!has_to_break && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] == '\0' || s1[i] < s2[i])
		{
			res = -1;
			has_to_break = 1;
		}
		else if (s2[i] == '\0' || s1[i] > s2[i])
		{
			res = 1;
			has_to_break = 1;
		}
		i++;
	}
	return (res);
}
