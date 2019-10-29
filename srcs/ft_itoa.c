/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <aaugusti@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 11:47:31 by aaugusti       #+#    #+#                */
/*   Updated: 2019/10/29 12:19:05 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

static int	ft_numlen(int n)
{
	int	res;

	res = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		res++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		res++;
	}
	return (res);
}

static char	*exception(int n)
{
	char	*res;

	res = malloc(13);
	if (n == 0)
		ft_strlcpy(res, "0", 2);
	else
		ft_strlcpy(res, "-2147483648", 12);
	return (res);
}

char		*ft_itoa(int n)
{
	int		n_len;
	int		is_neg;
	char	*res;
	int		i;

	is_neg = n < 0;
	n_len = ft_numlen(n);
	res = (char*)malloc(n_len + 1 + is_neg);
	if (n == -2147483648 || n == 0)
		return (exception(n));
	if (is_neg)
	{
		*res = '-';
		n *= -1;
	}
	res[n_len - 1] = '\0';
	i = 0;
	while (i < n_len)
	{
		res[n_len - 1 - i + is_neg] = (char)(n % 10 + '0');
		n /= 10;
		i++;
	}
	return (res);
}
