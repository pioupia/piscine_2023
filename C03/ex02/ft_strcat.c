/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <pioupia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 10:38:07 by pioupia           #+#    #+#             */
/*   Updated: 2024/06/12 11:04:37 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

{
	int	i;
	int	source_cursor;

	i = 0;
	source_cursor = 0;
	while (dest[i] != '\0')
		i++;
	while (src[source_cursor] != '\0')
	{
		dest[i + source_cursor] = src[source_cursor];
		source_cursor++;
	}
	dest[i + source_cursor] = '\0';
	return (dest);
}
