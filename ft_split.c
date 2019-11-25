/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                     +:+                    */
/*   By: aaugusti <aaugusti@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 13:29:47 by aaugusti       #+#    #+#                */
/*   Updated: 2019/11/25 14:04:15 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stddef.h>

static char		**remove_list(char **list, int n)
{
	while (*list && n >= 0)
	{
		free(*list);
		(*list) += sizeof(char *);
		n--;
	}
	free(list);
	return (NULL);
}

static size_t	get_size(char const *s, char c)
{
	char	prev;
	size_t	res;

	if (c == '\0' || *s == '\0')
		return (0);
	prev = 0;
	res = 0;
	if (*s != c && *s)
		res++;
	while (*s)
	{
		if (*s != c && prev == c)
			res++;
		prev = *s;
		s++;
	}
	return (res);
}

static char		**get_mem(size_t arr_size)
{
	char	**res;

	res = (char **)malloc((arr_size + 1) * sizeof(char *));
	if (res == NULL)
		return (NULL);
	res[arr_size] = NULL;
	return (res);
}

static int		skip_the_shit(char **s, char c)
{
	while (**s == c)
		(*s)++;
	if (!**s)
		return (1);
	return (0);
}

char			**ft_split(char const *s, char c)
{
	size_t	to_add_len;
	int		i;
	char	**res;

	if (s == NULL)
		return (NULL);
	res = get_mem(get_size(s, c));
	if (res == NULL)
		return (NULL);
	if (*s == '\0')
		return (res);
	i = 0;
	while (*s)
	{
		if (skip_the_shit((char **)&s, c))
			break ;
		to_add_len = ft_strlen_c((char *)s, c);
		res[i] = ft_strdup_c((const char *)s, c);
		if (res[i] == NULL)
			return (remove_list(res, i - 1));
		s += to_add_len;
		i++;
	}
	return (res);
}
