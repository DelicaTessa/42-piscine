/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/28 12:01:07 by tclement      #+#    #+#                 */
/*   Updated: 2020/01/28 16:46:57 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		if (*src != '\0')
		{
			*dest = *src;
			src++;
		}
		else
		{
			*dest = '\0';
		}
		i++;
		dest++;
	}
	*dest = '\0';
	dest -= i;
	return (dest);
}
