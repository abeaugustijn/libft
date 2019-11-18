/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                     +:+                    */
/*   By: aaugusti <aaugusti@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 14:54:19 by aaugusti       #+#    #+#                */
/*   Updated: 2019/11/18 10:35:30 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
#include <stdlib.h>

static int	in_set(const char *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	char	*b;
	char	*e;

	if (s1 == NULL || set == NULL)
		return (NULL);
	b = (char*)s1;
	e = (char*)s1 + ft_strlen(s1) - 1;
	while (in_set(set, *b) && *b)
		b++;
	while (in_set(set, *e) && e > s1)
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
