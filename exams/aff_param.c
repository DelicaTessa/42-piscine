/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   aff_param.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/07 12:08:28 by tclement      #+#    #+#                 */
/*   Updated: 2020/02/07 15:11:08 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;

	i = 0;

	while (argv[argc - ][i] != '\0')
	{
		write(1,&argv[argc - 1][i],1);
		i++;
	}
	return(0);
}

