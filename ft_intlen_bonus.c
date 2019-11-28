/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusti <aaugusti@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 20:08:08 by abe               #+#    #+#             */
/*   Updated: 2019/11/28 11:41:42 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

/*
**	Calculate the amount of digits in a signed long long if printed as a
**	decimal number.
*/

size_t	ft_intlen(long long int n)
{
	size_t	res;

	if (n == LLONG_MIN)
		return (12);
	if (n == 0)
		return (1);
	res = 0;
	if (n < 0)
	{
		n *= -1;
		res++;
	}
	while (n > 0)
	{
		res++;
		n /= 10;
	}
	return (res);
}
