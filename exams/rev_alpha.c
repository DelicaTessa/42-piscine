/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rev_alpha.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/07 14:48:35 by tclement      #+#    #+#                 */
/*   Updated: 2020/02/07 15:03:07 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;

	i = 0;

	while (argv[1][i] != '\0')
	{
		i++;
	}

	while (i > -1)
	{
		write (1, &argv[1][i], 1);
		i--;
	}
	return (0);
}

