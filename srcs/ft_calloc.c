/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <aaugusti@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 10:51:37 by aaugusti       #+#    #+#                */
/*   Updated: 2019/11/01 13:16:17 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;
	size_t	tot_size;

	tot_size = count * size;
	res = malloc(tot_size);
	if (res == NULL)
		return (NULL);
	ft_bzero(res, tot_size);
	return (res);
}
