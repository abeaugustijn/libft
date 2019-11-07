/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusti <aaugusti@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 20:31:49 by abe               #+#    #+#             */
/*   Updated: 2019/11/07 20:55:36 by abe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		number_len(int n, int base)
{
	int		res;

	res = 0;
	while (n > 0)
	{
		res++;
		n /= base;
	}
	return (res);
}

char	*ft_itoa_base(int n, int base)
{
	char	*bases;
	int		n_len;
	t_bool	is_neg;
	char	*res;
	int		i;

	bases = "0123456789ABCDEF";
	is_neg = FALSE;
	n_len = number_len(n, base);
	if (n < 0)
	{
		is_neg = TRUE;
		n *= -1;
	}
	res = (char *)malloc((size_t)(n_len + is_neg));
	if (is_neg)
		res[0] = '-';
	res[n_len + (int)is_neg - 1] = '\0';
	i = 0;
	while (n > 0)
	{
		res[n_len + (int)is_neg - i - 1] = bases[n % base];
		n /= base;
		i++;
	}
	return (res);
}
