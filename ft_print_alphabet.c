/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_alphabet.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/22 16:35:45 by tclement      #+#    #+#                 */
/*   Updated: 2020/01/23 13:28:46 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char alphabeta;

	alphabeta = 97;
	while (alphabeta <= 122)
	{
		ft_putchar(alphabeta);
		alphabeta++;
	}
	ft_putchar('\n');
}
