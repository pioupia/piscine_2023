/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <pioupia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:10:45 by pioupia           #+#    #+#             */
/*   Updated: 2024/06/12 11:04:37 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	to_find_index;
	int	end;

	i = 0;
	to_find_index = 0;
	while (str[i] != '\0' && to_find[to_find_index] != '\0')
	{
		if (str[i] == to_find[to_find_index])
			to_find_index++;
		else if (str[i] == to_find[0])
			to_find_index = 1;
		else
			to_find_index = 0;
		if (str[++i] == '\0')
			end = 1;
	}
	if (end && to_find_index != ft_strlen(to_find))
		return ((char *) 0);
	return (str + i - to_find_index);
}
