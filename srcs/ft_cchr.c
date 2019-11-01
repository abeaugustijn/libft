/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_cchr.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <aaugusti@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 13:32:17 by aaugusti       #+#    #+#                */
/*   Updated: 2019/11/01 16:06:05 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_cchr(const char *s, char c)
{
	int		res;

	res = 0;
	while (*s)
	{
		if (*s == c)
			res++;
		s++;
	}
	return (res);
}
