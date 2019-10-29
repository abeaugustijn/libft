/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <aaugusti@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 15:24:02 by aaugusti       #+#    #+#                */
/*   Updated: 2019/10/29 10:28:09 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <string.h>

	#include <stdlib.h>
	#include <string.h>
	#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	i;
	int	dst_len;
	int	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	while (*dst)
		dst++;
	i = 0;
	while (*src && i < dstsize - 1)
	{
		*dst = *src;
		dst++;
		src++;
		i++;
	}
	if (i < dstsize - dst_len && dstsize > 0 && dst_len <= dstsize)
		*dst = '\0';
	return (src_len + dstsize + (i < dstsize - dst_len));
}
