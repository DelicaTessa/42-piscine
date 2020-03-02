/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush0x.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/25 11:35:00 by tclement      #+#    #+#                 */
/*   Updated: 2020/02/08 11:26:11 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_printrows(int x, char start, char middle, char end)
{
	ft_putchar(start);
	while ((x - 1) > 1)
	{
		ft_putchar(middle);
		x--;
	}
	if (x > 1)
	{
		ft_putchar(end);
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if ((x > 0) || (y > 0))
	{
		ft_printrows(x, 'o', '-', 'o');
		while ((y - 1) > 1)
		{
			ft_printrows(x, '|', ' ', '|');
			y--;
		}
		if (y > 1)
			ft_printrows(x, 'o', '-', 'o');
	}
}
