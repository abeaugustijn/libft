/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <aaugusti@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 15:24:02 by aaugusti       #+#    #+#                */
/*   Updated: 2019/11/01 17:53:33 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <libft.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize == 0)
		return (dst_len + src_len);
	while (*dst)
		dst++;
	i = 0;
	while (dst_len + i < dstsize - 1)
	{
		*dst = *src;
		dst++;
		src++;
		i++;
	}
	if (i < dstsize - dst_len && dstsize > 0 && dst_len < dstsize)
		*dst = '\0';
	return (((dst_len > dstsize) ? dstsize : dst_len) + src_len);
}
