/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusti <aaugusti@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 20:08:08 by abe               #+#    #+#             */
/*   Updated: 2019/11/18 19:32:23 by abe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_intlen(long long int n)
{
	size_t	res;

	if (n == -2147483648)
		return (11);
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
