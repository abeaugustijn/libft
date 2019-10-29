/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <aaugusti@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 16:40:59 by aaugusti       #+#    #+#                */
/*   Updated: 2019/10/29 09:48:55 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		((char*)s)[i] = '\0';
		i++;
	}
}