/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abe <abe@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 20:17:50 by abe            #+#    #+#                */
/*   Updated: 2019/10/28 20:21:38 by abe           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	temp[n];
	size_t	i;

	i = 0;
	while (i < n)
	{
		temp[i] = ((char*)src)[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		((char*)dest)[i] = temp[i];
		i++;
	}
	return (dest);
}
