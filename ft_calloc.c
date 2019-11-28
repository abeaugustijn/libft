/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                     +:+                    */
/*   By: aaugusti <aaugusti@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 10:51:37 by aaugusti       #+#    #+#                */
/*   Updated: 2019/11/28 11:27:21 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
**	The calloc() function contiguously allocates enough space for count objects
**	that are size bytes of memory each and returns a pointer to the allocated
**	memory.  The allocated memory is filled with bytes of value zero.
**	Returns NULL if the memory allocation failed.
*/

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
