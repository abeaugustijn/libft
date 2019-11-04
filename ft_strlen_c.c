/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen_c.c                                      :+:      :+:    :+:   */
/*                                                     +:+                    */
/*   By: aaugusti <aaugusti@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 14:04:37 by aaugusti       #+#    #+#                */
/*   Updated: 2019/11/04 19:41:01 by abe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlen_c(char *str, char c)
{
	size_t	res;

	res = 0;
	while (*str != c && *str)
	{
		res++;
		str++;
	}
	return (res);
}
