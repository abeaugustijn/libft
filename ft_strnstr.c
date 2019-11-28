/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                     +:+                    */
/*   By: aaugusti <aaugusti@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 13:46:30 by aaugusti       #+#    #+#                */
/*   Updated: 2019/11/28 20:03:29 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

/*
**	Finds the first occurence of the string 'neelde' in 'haystack' where no more
**	than 'len' bytes are searched. Returns a pointer in 'haystack' to the first
**	char of the occurence of 'needle'. Returns NULL if there is no occurence
**	of 'needle' found in the first 'len' bytes of 'haystack', or when a 
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n_len;

	if (!*needle)
		return ((char*)haystack);
	n_len = ft_strlen(needle);
	while (*haystack && len > 0)
	{
		if (ft_strncmp(haystack, needle, n_len) == 0)
			return ((char*)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
