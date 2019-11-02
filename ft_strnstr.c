/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <aaugusti@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 13:46:30 by aaugusti       #+#    #+#                */
/*   Updated: 2019/11/01 17:54:04 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <libft.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t n;

	if (!*needle)
		return ((char*)haystack);
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
			return ((char*)haystack);
		haystack++;
		n++;
	}
	return (NULL);
}
