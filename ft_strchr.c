/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                     +:+                    */
/*   By: aaugusti <aaugusti@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 14:46:45 by aaugusti       #+#    #+#                */
/*   Updated: 2019/11/30 14:26:45 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

/*
**	Locate the first occurrence of 'c' in 's'. Returns NULL if 'c' is not in s.
*/

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char*)s);
		s++;
	}
	if (c)
		return (NULL);
	return ((void *)s);
}
