/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 10:42:17 by gcaron            #+#    #+#             */
/*   Updated: 2017/11/20 12:53:03 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#define BUF_SIZE 4096

int		main(int argc, char **argv)
{
	int		fd;
	int		n;
	char	buf[BUF_SIZE];

	if (argc != 2)
	{
		if (argc == 1)
			write(2, "File name missing.\n", 19);
		if (argc > 2)
			write(2, "Too many arguments.\n", 20);
		return (1);
	}
	if ((fd = open(argv[1], O_RDONLY)) == -1)
		return (-1);
	while ((n = read(fd, buf, BUF_SIZE)) > 0)
		write(1, buf, n);
	if (n == -1)
		return (-1);
	if (close(fd) < 0)
		return (-1);
	return (0);
}
