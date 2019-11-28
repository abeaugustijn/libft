/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                     +:+                    */
/*   By: abe <abe@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 20:35:36 by aaugusti       #+#    #+#                */
/*   Updated: 2019/11/28 13:06:27 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

/*
**	Compare the byte strings 's1' to 's2'. No more than 'n' bytes are checked.
**	If a difference is found the difference between the bytes at which the
**	difference occured is returned. (*s1 - *s2). Both bytestrings are inter-
**	preted as unsigned char strings. If no difference in the first n bytes is
**	found, 0 is returned.
*/

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && ((unsigned char*)s1)[i] == ((unsigned char*)s2)[i])
		i++;
	if (i == n)
		return (0);
	return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
}
