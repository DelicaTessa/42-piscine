/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_antidote.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/31 08:58:05 by tclement      #+#    #+#                 */
/*   Updated: 2020/01/31 13:04:44 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_antidote(int i, int j, int k)
{
	if ((i < j && j < k) || (k < j && j < i))
		return (j);
	if ((j < i && i < k) || (k < i && i < j))
		return (i);
	if ((j < k && k < i) || (i < k && k < j))
		return (k);
	else
		return (0);
}
