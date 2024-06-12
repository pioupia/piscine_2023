/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <pioupia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 11:47:52 by pioupia           #+#    #+#             */
/*   Updated: 2024/06/12 11:04:37 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	if ((*str > 47 && *str < 58)
		|| (*str > 64 && *str < 91)
		|| (*str > 96 && *str < 123))
		return (1);
	else
		return (0);
}

int	ft_str_is_char(char *str)
{
	if ((*str > 64 && *str < 91) || (*str > 96 && *str < 123))
		return (1);
	else
		return (0);
}

int	ft_str_is_lower(char *str)
{
	if (*str > 96 && *str < 123)
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	need_maj;

	i = 0;
	need_maj = 1;
	while (str[i] != '\0')
	{
		if (need_maj)
		{
			if (ft_str_is_lower(&str[i]))
				str[i] -= 32;
			need_maj = 0;
		}
		else if (ft_str_is_char(&str[i]) && !ft_str_is_lower(&str[i]))
			str[i] += 32;
		if (!ft_str_is_alpha(&str[i]))
			need_maj = 1;
		i++;
	}
	return (str);
}
