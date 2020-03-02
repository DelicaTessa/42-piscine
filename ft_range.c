/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_range.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/30 17:25:24 by tclement      #+#    #+#                 */
/*   Updated: 2020/01/30 17:28:14 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int len;
	int *range;
  
	len = 0;
	range = malloc(len +1);

	if (min < max)
	{
		while (*range != '\0')
		{
			range++;
			len++;
		}
		*range = max - min;
	}
	if ( min >= max)
	{
		return (0);
	}
 	*range = '\0';
 	range -= len;
 	return (range);
