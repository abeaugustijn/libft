/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                     +:+                    */
/*   By: aaugusti <aaugusti@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 14:54:19 by aaugusti       #+#    #+#                */
/*   Updated: 2019/11/22 12:04:25 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
#include <stdlib.h>

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
	while (ft_inset(set, *b) && *b)
		b++;
	while (ft_inset(set, *e) && e > s1)
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
