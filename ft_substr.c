/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/12 10:33:48 by aaugusti       #+#    #+#                */
/*   Updated: 2019/11/30 19:52:08 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ft_substr_strldup(const char *src, size_t n)
{
	size_t	len;
	char	*res;

	if (src == NULL)
		return (NULL);
	len = ft_strlen(src);
	len = (len > n ? n : len) + 1;
	res = (char *)malloc(len);
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, src, len);
	return (res);
}

/*
**	Get a substring of 's', starting at char position 'start' with the length of
**	'len'. Returns NULL if the allocation fails or s == NULL. Returns an empty
**	string if start is greater than the length of s.
*/

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len)
		return (ft_strdup(""));
	return (ft_substr_strldup(s + start, len));
}
