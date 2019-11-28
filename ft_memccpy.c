/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                     +:+                    */
/*   By: abe <abe@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 19:50:30 by abe            #+#    #+#                */
/*   Updated: 2019/11/28 12:49:10 by aaugusti         ###   ########.fr       */
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
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
		if (((unsigned char*)src)[i] == (unsigned char)c)
			break ;
		i++;
	}
	if (i >= n)
		return (NULL);
	return (dest + i + 1);
}
