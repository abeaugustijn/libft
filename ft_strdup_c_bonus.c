/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_c_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 09:52:08 by aaugusti          #+#    #+#             */
/*   Updated: 2019/11/28 18:37:37 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
**	Duplicate a stirng until 'c' is encountered of the end of the string is
**	reached. Returns NULL if the allocation fails. Result is alway NULL-
**	terminated.
*/

char	*ft_strdup_c(const char *s1, char c)
{
	size_t	s_len;
	char	*res;

	s_len = ft_strlen_c((char *)s1, c);
	res = (char *)malloc(s_len + 1);
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, s1, s_len + 1);
	return (res);
}
