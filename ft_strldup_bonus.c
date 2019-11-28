/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strldup_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 10:12:48 by aaugusti          #+#    #+#             */
/*   Updated: 2019/11/28 19:36:56 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
**	Duplicate at most n - 1 bytes of src. Always null-terminates the result
**	string. Returns NULL if the allocation fails or when s == null.
*/

char	*ft_strldup(const char *src, size_t n)
{
	size_t	src_len;
	size_t	final_len;
	char	*res;

	if (src == NULL)
		return (NULL);
	src_len = ft_strlen(src);
	final_len = (src_len > n ? n : src_len) + 1;
	res = (char *)malloc(final_len);
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, src, final_len);
	return (res);
}
