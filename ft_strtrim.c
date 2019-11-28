/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                     +:+                    */
/*   By: aaugusti <aaugusti@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 14:54:19 by aaugusti       #+#    #+#                */
/*   Updated: 2019/11/28 20:12:38 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
**	Trim all of the chars in 'set' form the start and end of 's1'. Returns a
**	newly allocated string with the result. Returns NULL if the allocation
**	failed. If there are only chars in 's1' which are also in 'set' an empty
**	string is returned. If either 's1' or 'set' is NULL, the funcion returns
**	NULL and does nothing.
*/

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	char	*b;
	char	*e;

	if (s1 == NULL || set == NULL)
		return (NULL);
	b = (char*)s1;
	e = (char*)s1 + ft_strlen(s1) - 1;
	if (e < b)
		return (ft_strdup(""));
	while (ft_strchr(set, *b) && *b)
		b++;
	while (ft_strchr(set, *e) && e > s1)
		e--;
	e++;
	if (b >= e)
		return (ft_strdup(""));
	res = (char*)malloc(e - b + 1);
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, b, e - b + 1);
	return (res);
}
