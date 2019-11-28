/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                     +:+                    */
/*   By: abe <abe@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 21:36:58 by abe            #+#    #+#                */
/*   Updated: 2019/11/28 19:30:27 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

/*
**	Copy at most n - 1 bytes from src to dst. Always null-terminates the string.
**	Returns the strlen of src.
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	if (src == NULL)
		return (0);
	if (n > 0)
	{
		i = 0;
		while (i < n - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
