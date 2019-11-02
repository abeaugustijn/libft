/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <aaugusti@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 14:45:35 by aaugusti       #+#    #+#                */
/*   Updated: 2019/11/01 17:53:52 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <libft.h>
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	s_len;
	unsigned int	i;

	s_len = (unsigned int)ft_strlen(s);
	res = (char*)malloc(s_len + 1);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}