/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 13:11:29 by aaugusti       #+#    #+#                */
/*   Updated: 2019/10/29 09:55:34 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 1;
	if (n <= 0)
		return (-1);
	while (*s1 == *s2 && i < n && *s1 && *s2)
	{
		s1++;
		s2++;
		i++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}