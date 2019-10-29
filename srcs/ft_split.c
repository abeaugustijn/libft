/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <aaugusti@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 13:29:47 by aaugusti       #+#    #+#                */
/*   Updated: 2019/10/29 14:09:41 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

char	**ft_split(char const *s, char c)
{
	char	*b;
	char	*e;
	char	**res;
	int		i;

	b = (char*)s;
	res = (char**)malloc(sizeof(char*) * (ft_cchr(s, c) - 1));
	e = b;

	i = 0;
	while (*e)
	{
		while (*e != c && *e)
			e++;
		res[i] = (char*)malloc(sizeof(char) * (e - b + 1));
		if (e == b)
			res[i][0] = '\0';
		else
			ft_strlcpy(res[i], b, e - b + 1);
		e++;
		b = e;
		i++;
	}
	return (res);
}
