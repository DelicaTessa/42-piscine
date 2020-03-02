/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/30 15:24:32 by tclement      #+#    #+#                 */
/*   Updated: 2020/01/30 16:06:05 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*ptr;

	len = 0;
	ptr = malloc(len + 1);
	while (*src != '\0')
	{
		*ptr = *src;
		src++;
		ptr++;
		len++;
	}
	*ptr = '\0';
	ptr -= len;
	return (ptr);
}
