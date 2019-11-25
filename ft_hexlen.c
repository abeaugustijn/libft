/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 15:29:26 by aaugusti          #+#    #+#             */
/*   Updated: 2019/11/25 15:32:13 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_hexlen(unsigned long long n)
{
	int	res;

	res = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 16;
		res++;
	}
	return (res);
}
