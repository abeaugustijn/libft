/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <aaugusti@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 14:46:45 by aaugusti       #+#    #+#                */
/*   Updated: 2019/10/29 10:06:36 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char*)s);
		s++;
	}
	if (c == 0)
		return ((char*)s);
	return (NULL);
}