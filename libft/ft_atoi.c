/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/28 18:14:57 by tclement      #+#    #+#                 */
/*   Updated: 2020/01/28 18:37:54 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int value;
	int sign;

	value = 0;
	sign = 1;
	if (*str == 43 || *str == 45)
	{
		if (*str == 45)
		{
			sign = -1;
		}
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		value = value * 10;
		value = value + (*str - '0');
		str++;
	}
	return (value * sign);
}
