/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abe <abe@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 21:36:58 by abe            #+#    #+#                */
/*   Updated: 2019/11/01 17:53:41 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <libft.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;

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