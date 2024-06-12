/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <pioupia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 13:10:48 by pioupia           #+#    #+#             */
/*   Updated: 2024/06/12 11:04:37 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_strcpy(char *dest, char *str, int len)
{
	int		i;

	i = 0;
	while (i < len)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
}

struct s_stock_str	ft_create_struct(char *str)
{
	struct s_stock_str	stock_str;

	stock_str.size = ft_strlen(str);
	stock_str.copy = malloc((stock_str.size + 1) * sizeof(char));
	if (stock_str.copy == NULL)
		return (stock_str);
	ft_strcpy(stock_str.copy, str, stock_str.size);
	stock_str.str = str;
	return (stock_str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	struct_str;
	struct s_stock_str	*tab_struct_str;

	i = 0;
	tab_struct_str = malloc((ac + 1) * sizeof(t_stock_str));
	if (tab_struct_str == NULL)
		return ((void *)(0));
	while (i < ac)
	{
		struct_str = ft_create_struct(av[i]);
		if (struct_str.copy == NULL)
		{
			free(tab_struct_str);
			return ((void *)(0));
		}
		tab_struct_str[i] = struct_str;
		i++;
	}
	tab_struct_str[i].str = 0;
	return (tab_struct_str);
}
