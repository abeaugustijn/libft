/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                     +:+                    */
/*   By: aaugusti <aaugusti@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 14:39:20 by aaugusti       #+#    #+#                */
/*   Updated: 2019/11/28 20:04:24 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

/*
**	Find the last occurence of 'c' in 's'. If 'c' is not encountered in 's' then
**	null is returned. Otherwise a pointer in 's' to 'c' is returned.
*/

char	*ft_strrchr(const char *s, int c)
{
	const char	*res;

	res = NULL;
	while (*s)
	{
		if (*s == (char)c)
			res = s;
		s++;
	}
	if ((unsigned char)c == 0)
		return ((char*)s);
	return ((char*)res);
}
