/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <pioupia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 08:58:54 by pioupia           #+#    #+#             */
/*   Updated: 2024/06/12 11:04:37 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_next_char(char *str, char *charset, int from)
{
	int	i;
	int	j;

	i = from;
	j = 0;
	while (str[i] != '\0')
	{
		while (charset[j] != '\0')
			if (charset[j++] == str[i])
				return (i);
		i++;
		j = 0;
	}
	return (i);
}

int	ft_count_char(char *str, char *charset)
{
	int	count;
	int	i;
	int	next;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		next = ft_next_char(str, charset, i);
		if (next != i)
			count++;
		i = next + 1;
	}
	return (count);
}

void	ft_copy(char *dest, char *src, int max)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < max)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

char	**ft_feed_tab(char **tab, char *str, char *charset, int count)
{
	int	i;
	int	j;
	int	next;

	i = 0;
	j = 0;
	count = 0;
	while (str[i] != '\0')
	{
		next = ft_next_char(str, charset, i);
		if (next != i)
		{
			tab[j] = malloc((next - i) * sizeof(char));
			if (tab[j] == NULL)
				return (NULL);
			ft_copy(tab[j], (str + i), next - i);
			j++;
		}
		i = next + 1;
	}
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	int		count;
	char	**tab;

	count = ft_count_char(str, charset);
	tab = malloc((count + 1) * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	tab[count] = 0;
	return (ft_feed_tab(tab, str, charset, count));
}
