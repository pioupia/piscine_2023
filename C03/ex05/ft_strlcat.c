/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <pioupia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 16:45:19 by pioupia           #+#    #+#             */
/*   Updated: 2024/06/12 11:04:37 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	first_dist_char;

	i = 0;
	first_dist_char = ft_strlen(dest);
	while (i + first_dist_char < size)
	{
		dest[first_dist_char + i] = src[i];
		i++;
	}
	dest[first_dist_char + i - 1] = '\0';
	return (first_dist_char + ft_strlen(src));
}
