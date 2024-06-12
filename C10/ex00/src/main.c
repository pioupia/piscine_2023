/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pioupia <pioupia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:17:48 by pioupia           #+#    #+#             */
/*   Updated: 2024/06/12 11:04:37 by pioupia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>

int	main(int argc, char **argv)
{
	int		fd;
	int		size;
	char	*buff[500];

	if (argc == 1)
		return (error("File name missing.\n"));
	if (argc > 2)
		return (error("Too many arguments.\n"));
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (error("Cannot read file.\n"));
	size = read(fd, buff, 500);
	while (size > 0)
	{
		write(1, buff, size);
		size = read(fd, buff, 500);
	}
	if (size < 0)
		return (error("Cannot read file.\n"));
	close(fd);
	return (0);
}
