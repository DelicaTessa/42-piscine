/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_program.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/29 08:51:13 by tclement      #+#    #+#                 */
/*   Updated: 2020/01/29 11:38:33 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	argc = 1;
	while (argv[0][i] != '\0')
	{
		ft_putchar(argv[0][i]);
		argv[0]++;
	}
	ft_putchar('\n');
	return (0);
}
