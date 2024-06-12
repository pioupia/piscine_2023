/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <pioupia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:33:49 by pioupia           #+#    #+#             */
/*   Updated: 2024/06/12 11:04:37 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	source_cursor;

	i = 0;
	source_cursor = 0;
	while (dest[i] != '\0')
		i++;
	while (src[source_cursor] != '\0' && source_cursor < nb)
	{
		dest[i + source_cursor] = src[source_cursor];
		source_cursor++;
	}
	dest[i + source_cursor] = '\0';
	return (dest);
}
