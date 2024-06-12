/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <pioupia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 09:43:16 by pioupia           #+#    #+#             */
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

void	ft_cpystr(char *str, char *join, int *index)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		join[*index] = str[i];
		(*index)++;
		i++;
	}
}

char	*ft_cpy(char **strs, char *sep, int total_size, int size)
{
	char	*join;
	int		i;
	int		total_write;

	i = 0;
	total_write = 0;
	join = malloc((total_size + 1) * sizeof(char));
	while (i < size)
	{
		ft_cpystr(strs[i], join, &total_write);
		if (i + 1 != size)
			ft_cpystr(sep, join, &total_write);
		i++;
	}
	join[total_write] = '\0';
	return (join);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_size;
	int		i;
	int		sep_size;
	char	*join;

	sep_size = ft_strlen(sep);
	total_size = 0;
	i = 0;
	if (size == 0)
	{
		join = (char *) malloc(sizeof(char));
		join[0] = '\0';
		return (join);
	}
	while (i < size)
	{
		total_size += ft_strlen(strs[i]) + sep_size;
		i++;
	}
	return (ft_cpy(strs, sep, total_size, size));
}
