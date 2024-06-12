/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <pioupia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 13:56:20 by pioupia           #+#    #+#             */
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

void	ft_sort_char(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j > 0 && ft_strcmp(argv[j - 1], argv[j]) != -1)
		{
			temp = argv[j - 1];
			argv[j - 1] = argv[j];
			argv[j] = temp;
			j--;
		}
		i++;
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		write(1, &str[i++], 1);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc < 2)
		return (1);
	ft_sort_char(argc - 1, argv + 1);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
