/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <aaugusti@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 14:54:19 by aaugusti       #+#    #+#                */
/*   Updated: 2019/10/29 15:07:21 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		set_len;
	char	*b;
	char	*e;

	set_len = ft_strlen(set);
	b = (char*)s1;
	e = (char*)s1 + ft_strlen(s1) - set_len;
	if (ft_strncmp(s1, set, set_len) == 0)
		b += set_len;
	if (ft_strncmp(e, set, set_len) != 0)
		e += set_len;
	res = (char*)malloc(e - b + 1);
	ft_strlcpy(res, b, e - b + 1);
	return (res);
}
