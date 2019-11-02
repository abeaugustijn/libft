/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <aaugusti@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 13:49:36 by aaugusti       #+#    #+#                */
/*   Updated: 2019/11/01 17:53:18 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <libft.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*res;

	len = ft_strlen(s1);
	res = (char *)malloc(len + 1);
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, s1, len + 1);
	return (res);
}
