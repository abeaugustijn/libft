/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abe <abe@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 20:17:50 by abe            #+#    #+#                */
/*   Updated: 2019/11/01 17:10:57 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;

	i = 0;
	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			((unsigned char*)dest)[i] = ((unsigned char*)src)[i];
			i++;
		}
	}
	else if (dest > src)
	{
		i = n;
		while (i > 0)
		{
			((unsigned char*)dest)[i - 1] = ((unsigned char*)src)[i - 1];
			i--;
		}
	}
	return (dest);
}
