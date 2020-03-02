/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   display_name.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/06 08:54:31 by tclement      #+#    #+#                 */
/*   Updated: 2020/02/06 17:32:33 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE	4096

int		main(int argc, char **argv)
{
	int		fd;
	int		rd;
	char	buf[BUF_SIZE + 1];

	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
	}
	if (argc >= 3)
	{
		write(2, "Too many arguments.\n", 20);
	}
	else
	{
		fd = open(argv[1], O_RDONLY);
		rd = read(fd, buf, BUF_SIZE);
		buf[rd] = '\0';
		write(1, buf, rd);
	}
	return (0);
}
