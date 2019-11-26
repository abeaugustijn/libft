/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_ui.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusti <aaugusti@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 11:05:45 by abe               #+#    #+#             */
/*   Updated: 2019/11/16 11:09:23 by abe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

/*
**	Convert a character string to an unsigned int.
**	- returns 0 if overflow
**	- allows unlimited whitespace at the beginning of the string
**	- allows a signle '+' sign at the beginning of the string
*/

unsigned int	ft_atoi_ui(const char *str)
{
	unsigned int	res;

	res = (unsigned int)ft_atoi_ul(str);
	if (res > UINT_MAX)
		return (0);
	return ((unsigned int)res);
}
