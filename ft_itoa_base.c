/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa_base.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <aaugusti@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/07 20:31:49 by abe            #+#    #+#                */
/*   Updated: 2019/11/15 14:30:19 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		number_len(int n, int base)
{
	int		res;

	res = 0;
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		res++;
		n /= base;
	}
	return (res);
}

void	check_neg(long long *n, t_bool *is_neg)
{
	if (*n < 0)
	{
		*is_neg = TRUE;
		*n *= -1;
	}
}

char	*exceptions(long long n, int base)
{
	if (base < 2 || base > 36)
		return (NULL);
	if (n == 0)
		return (ft_strdup("0"));
	return ((char *)1);
}

char	*ft_itoa_base(long long n, int base)
{
	char	*bases;
	int		n_len;
	t_bool	is_neg;
	char	*res;
	int		i;

	bases = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	is_neg = FALSE;
	if (exceptions(n, base) != (char *)1)
		return (exceptions(n, base));
	n_len = number_len(n, base);
	check_neg(&n, &is_neg);
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
