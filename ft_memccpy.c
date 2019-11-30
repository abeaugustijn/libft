/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                     +:+                    */
/*   By: abe <abe@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 19:50:30 by abe            #+#    #+#                */
/*   Updated: 2019/11/30 14:18:46 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

/*
**	Copies at most 'n' bytes from 'src' to 'dest' until 'c' is encountered in
**	'src'. If 'c' is encountered before 'n' is reached a pointer to the first
**	occurence of 'c' is returned. If 'n' is reached first then NULL is returned.
*/

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	while (n > 0)
	{
		*((unsigned char *)dest) = *((unsigned char*)src);
		if (*((unsigned char *)dest) == (unsigned char)c)
			break ;
		dest++;
		src++;
		n--;
	}
	if (n)
		return (dest + 1);
	return (NULL);
}
