/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                     +:+                    */
/*   By: aaugusti <aaugusti@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 15:24:02 by aaugusti       #+#    #+#                */
/*   Updated: 2019/11/28 19:02:24 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

/*
**	Concatenate 'src' with 'dst'. The total length of 'dst' will be at most
**	'dstsize' (including the null-byte). 'dst' will be always be null-
**	terminated. The length of the string it tried to create will be returned.
*/

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (j < dstsize - i - 1 && src[j] && dstsize > i)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	while (src[j] != '\0')
		j++;
	if (dstsize < i)
		return (dstsize + j);
	return (i + j);
}
