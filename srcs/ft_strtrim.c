/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <aaugusti@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 14:54:19 by aaugusti       #+#    #+#                */
/*   Updated: 2019/11/01 13:35:02 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
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

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		set_len;
	char	*b;
	char	*e;

	set_len = ft_strlen(set);
	b = (char*)s1;
	e = (char*)s1 + ft_strlen(s1) - 1;
	while (in_set(set, *b))
		b++;
	while (in_set(set, *e))
		e--;
	e++;
	res = (char*)malloc((b >= e) ? 1 : (e - b + 1));
	if (res == NULL)
		return (NULL);
	if (b >= e)
		res[0] = '\0';
	else
		ft_strlcpy(res, b, e - b + 1);
	return (res);
}
