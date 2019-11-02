/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: abe <abe@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 20:25:07 by abe            #+#    #+#                */
/*   Updated: 2019/11/01 17:52:17 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <libft.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*s_cpy;

	i = 0;
	s_cpy = (char*)s;
	while (i < n)
	{
		if (((unsigned char*)s)[i] == (unsigned char)c)
			return (s_cpy + i);
		i++;
	}
	return (NULL);
}