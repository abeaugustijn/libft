/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <aaugusti@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 10:51:37 by aaugusti       #+#    #+#                */
/*   Updated: 2019/10/29 11:35:20 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*res;
	void	*ptr;

	if (size > 0 && count > 0)
	{
		i = 0;
		while (i < count)
		{
			ptr = malloc(size);
			if (i == 0)
				res = ptr;
			ptr += size;
			i++;
		}
		return (res);
	}
	return (NULL);
}
