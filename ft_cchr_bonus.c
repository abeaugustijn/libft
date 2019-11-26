/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_cchr.c                                          :+:      :+:    :+:   */
/*                                                     +:+                    */
/*   By: aaugusti <aaugusti@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 13:32:17 by aaugusti       #+#    #+#                */
/*   Updated: 2019/11/26 15:50:07 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Count the occurence of c in s
*/

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
