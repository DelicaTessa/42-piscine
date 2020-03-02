/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_reverse_alphabet.c                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/23 11:23:00 by tclement      #+#    #+#                 */
/*   Updated: 2020/01/23 14:18:26 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char alphabeta;

	alphabeta = 122;
	while (alphabeta >= 97)
	{
		ft_putchar(alphabeta);
		alphabeta--;
	}
	ft_putchar('\n');
}
