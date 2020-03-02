/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_takes_place.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/30 18:45:34 by tclement      #+#    #+#                 */
/*   Updated: 2020/01/31 15:37:42 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_takes_place(int hour)
{
	if (hour <= 0 || hour <= 24)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		if (hour < 12 && hour != 11 && hour != 0)
			printf(" %02d.00 A.M. AND %02d.00 A.M.\n", hour, hour + 1);
		if (hour == 23)
			printf("11.00 P.M. AND 12.00 A.M.\n");
		if (hour == 24 || hour == 0)
			printf("12.00 A.M. AND 01.00 A.M.\n");
		if (hour == 11)
			printf("11.00 A.M. AND 12.00 P.M.\n");
		if (hour == 12)
			printf("12.00 P.M. AND 01.00 P.M.\n");
		if (hour > 12 && hour != 23 && hour != 24)
			printf("%02d.00 P.M. AND %02d.00 P.M.\n", hour - 12, hour - 11);
	}
}
