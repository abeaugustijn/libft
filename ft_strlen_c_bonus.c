/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen_c_bonus.c                                :+:      :+:    :+:   */
/*                                                     +:+                    */
/*   By: aaugusti <aaugusti@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 14:04:37 by aaugusti       #+#    #+#                */
/*   Updated: 2019/11/28 19:38:50 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

/*
**	Get the amount of bytes in 'str' before the first occurrence of a null-byte
**	or 'c'.
*/

size_t	ft_strlen_c(char *str, char c)
{
	size_t	res;

	res = 0;
	while (str[res] != c && str[res])
		res++;
	return (res);
}
