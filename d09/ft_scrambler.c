/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_scrambler.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/31 11:27:19 by tclement      #+#    #+#                 */
/*   Updated: 2020/01/31 13:34:03 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int temp1;
	int temp2;
	int temp3;
	int temp4;

	temp1 = *******c;
	temp2 = ****d;
	temp3 = *b;
	temp4 = ***a;
	*******c = temp4;
	****d = temp2;
	*b = temp3;
	***a = temp1;
}
