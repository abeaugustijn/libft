/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strldup_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 10:12:48 by aaugusti          #+#    #+#             */
/*   Updated: 2019/11/30 14:25:26 by aaugusti         ###   ########.fr       */
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
	size_t	len;
	char	*res;

	if (src == NULL)
		return (NULL);
	len = ft_strlen(src);
	len = (len > n ? n : len) + 1;
	res = (char *)malloc(len);
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, src, len);
	return (res);
}
