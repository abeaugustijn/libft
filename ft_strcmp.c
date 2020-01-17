/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 13:11:29 by aaugusti       #+#    #+#                */
/*   Updated: 2020/01/17 12:02:04 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

/*
**	Compare 's1' and 's2'. If a difference is encountered the difference
**	between the two chars is returned (s1 - s2). If no difference
**	is found, 0 is returned.
*/

int		ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
