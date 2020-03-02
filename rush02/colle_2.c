/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   testa.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: bsomers <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/09 18:59:57 by bsomers       #+#    #+#                 */
/*   Updated: 2020/02/09 20:45:39 by bsomers       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define BUF_SIZE 4096

int	main(void)
{
	int		ret;
	char	buf[BUF_SIZE + 1];
	int		x;
	int		i;

	x = 0;
	i = 0;
	ret = read(0, buf, BUF_SIZE);
	buf[ret] = '\0';
	while (i < (BUF_SIZE))
	{
		if (buf[i] == '\n')
			return (i);
		i++;
		write(1, &i, 1);
	}
	return (0);
}
