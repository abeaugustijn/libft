/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                     +:+                    */
/*   By: aaugusti <aaugusti@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 15:24:02 by aaugusti       #+#    #+#                */
/*   Updated: 2019/11/30 11:13:30 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

/*
**	Concatenate 'src' with 'dst'. The total length of 'dst' will be at most
**	'dstsize' (including the null-byte). 'dst' will be always be null-
**	terminated. The length of the string it tried to create will be returned.
**
**	n_app: the amount of chars to append to dst (including the null-byte)
**	d_len: the length of dst at the start of the function
*/

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	n_app;
	size_t	d_len;
	size_t	s_len;
	
	d_len = ft_strlen(dst);
	d_len = d_len > dstsize ? dstsize : d_len;
	s_len = ft_strlen(src);
	n_app = (dstsize > d_len ? dstsize - d_len : 0);
	n_app = n_app > s_len + 1 ? s_len + 1 : n_app;
	while (*dst)
		dst++;
	if (!n_app)
		return (d_len + s_len);
	ft_memcpy(dst, src, n_app - 1);
	dst[n_app] = '\0';
	return (d_len + s_len);
}
