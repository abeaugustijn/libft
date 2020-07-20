/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_xalloc_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <aaugusti@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/04/28 11:26:37 by aaugusti      #+#   #+#                  */
/*   Updated: 2020/04/28 11:27:59 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
**	Allocate a block of memory and initialize all values to be 0.
**
**	@param {size_t} size
**
**	@return {void *} - NULL if the allocation failed.
*/

void	*ft_xalloc(size_t size)
{
	void	*res;

	res = malloc(size);
	if (!res)
		return (NULL);
	ft_bzero(res, size);
	return (res);
}
