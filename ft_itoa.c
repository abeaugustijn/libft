/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                     +:+                    */
/*   By: aaugusti <aaugusti@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 11:47:31 by aaugusti       #+#    #+#                */
/*   Updated: 2019/11/28 12:58:05 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
#include <stdlib.h>
#include <limits.h>

/*
**	Get the amount of bytes needed to store the result of itoa.
*/

static int	ft_itoa_numlen(int n)
{
	int	res;

	res = 0;
	if (n < 0)
	{
		n *= -1;
		res++;
	}
	while (n > 0)
	{
		n /= 10;
		res++;
	}
	return (res);
}

/*
**	Check for the two edgecases and handle those.
*/

static char	*ft_itoa_exception(int n)
{
	char	*res;

	res = (char *)malloc(n == 0 ? 2 : 13);
	if (res == NULL)
		return (NULL);
	if (n == 0)
		ft_strlcpy(res, "0", 2);
	else
		ft_strlcpy(res, "-2147483648", 12);
	return (res);
}

/*
**	Allocate the right amount of memory for the result string and zero-temrinate
**	the string.
*/

static char	*ft_itoa_get_mem(size_t len)
{
	char	*res;

	res = (char *)malloc(len);
	if (res == NULL)
		return (NULL);
	res[len - 1] = '\0';
	return (res);
}

/*
**	Convert an integer into a string. Returns NULL if the allocation failed.
*/

char		*ft_itoa(int n)
{
	int		n_len;
	int		is_neg;
	char	*res;
	int		i;

	is_neg = n < 0;
	n_len = ft_itoa_numlen(n);
	if (n == INT_MIN || n == 0)
		return (ft_itoa_exception(n));
	res = ft_itoa_get_mem((size_t)n_len + 1);
	if (res == NULL)
		return (NULL);
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
