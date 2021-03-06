/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   match.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/30 18:32:15 by tclement      #+#    #+#                 */
/*   Updated: 2020/02/02 09:39:08 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	match(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		while (*s1 != '\0')
		{
			if (match(s1, s2 + 1))
			{
				return (1);
			}
			s1++;
		}
		return (match(s1, s2 + 1));
	}
	else if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		return (match(s1 + 1, s2 + 1));
	}
	else if (*s1 == *s2 && *s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
