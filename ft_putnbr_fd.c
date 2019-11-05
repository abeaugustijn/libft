/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <aaugusti@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 13:14:37 by aaugusti       #+#    #+#                */
/*   Updated: 2019/11/05 14:26:39 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_numlen(int n)
{
	int	res;

	res = 0;
	if (n == 0)
		return (1);
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

static void	exception(int n, int fd)
{
	if (n == 0)
		ft_putstr_fd("0", fd);
	else
		ft_putstr_fd("-2147483648", fd);
}

void		ft_putnbr_fd(int n, int fd)
{
	int		n_len;
	int		is_neg;
	char	res[14];
	int		i;

	is_neg = n < 0;
	n_len = ft_numlen(n);
	if (n == -2147483648 || n == 0)
		exception(n, fd);
	if (is_neg)
	{
		*res = '-';
		n *= -1;
	}
	i = 0;
	res[n_len] = '\0';
	while (i < n_len - is_neg)
	{
		res[n_len - 1 - i] = (char)(n % 10 + '0');
		n /= 10;
		i++;
	}
	ft_putstr_fd(res, fd);
}
