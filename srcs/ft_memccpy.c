/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abe <abe@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 19:50:30 by abe            #+#    #+#                */
/*   Updated: 2019/10/28 20:16:08 by abe           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char*)dest)[i] = ((char*)src)[i];
		if (((char*)src)[i] == (char)c)
			break ;
		i++;
	}
	if (i == n)
		return (NULL);
	return (dest + i);
}