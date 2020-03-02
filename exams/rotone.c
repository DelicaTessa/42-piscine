/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotone.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/07 15:03:17 by tclement      #+#    #+#                 */
/*   Updated: 2020/02/07 16:05:38 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	i = 0;
    
	while (argv[1] != '\0')
	{
		if (argv[1][i] >= 'A' && argv[1][i] < 'Z')
		{
			ft_putchar(*argv + 1);
		}
		i++;
	}
	return (0);
}
