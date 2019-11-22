/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                     +:+                    */
/*   By: aaugusti <aaugusti@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 11:47:31 by aaugusti       #+#    #+#                */
/*   Updated: 2019/11/22 10:50:19 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
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

static char	*exception(int n, char *old)
{
	char	*res;
	size_t	mem_size;

	if (old)
		free(old);
	if (n == 0)
		mem_size = 2;
	else
		mem_size = 13;
	res = (char *)malloc(mem_size);
	if (n == 0)
		ft_strlcpy(res, "0", 2);
	else
		ft_strlcpy(res, "-2147483648", 12);
	return (res);
}

static char	*gimme_mem(size_t len)
{
	char	*res;

	res = (char *)malloc(len);
	if (res == NULL)
		return (NULL);
	res[len - 1] = '\0';
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
	res = gimme_mem((size_t)n_len + 1);
	if (res == NULL)
		return (NULL);
	if (n == -2147483648 || n == 0)
		return (exception(n, res));
	if (is_neg)
	{
		*res = '-';
		n *= -1;
	}
	i = 0;
	while (i < n_len - is_neg)
	{
		res[n_len - 1 - i] = (char)(n % 10 + '0');
		n /= 10;
		i++;
	}
	return (res);
}
