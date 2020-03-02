/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/28 19:57:28 by tclement      #+#    #+#                 */
/*   Updated: 2020/02/01 15:46:57 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		++i;
	}
	if ((s1[i] < s2[i]) || (s1[i] > s2[i]))
	{
		return (s1[i] - s2[i]);
	}
	else
	{
		return (0);
	}
}
