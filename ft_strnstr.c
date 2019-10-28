/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <aaugusti@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 13:46:30 by aaugusti       #+#    #+#                */
/*   Updated: 2019/10/28 14:36:58 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_strlen(char *str)
{
	int	res;

	res = 0;
	while (*str)
	{
		str++;
		res++;
	}
	return (res);
}

char		*ft_strnstr(char *haystack, char *needle, int len)
{
	int i;
	int n;

	if (!*needle)
		return (haystack);
	n = 0;
	while (*haystack && n < len)
	{
		i = 0;
		while (needle[i] && n + i < len)
		{
			if (needle[i] != *(haystack + i))
				break ;
			i++;
		}
		if (i == ft_strlen(needle))
			return (haystack);
		haystack++;
		n++;
	}
	return (NULL);
}
