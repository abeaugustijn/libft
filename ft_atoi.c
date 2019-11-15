/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 12:45:05 by aaugusti       #+#    #+#                */
/*   Updated: 2019/11/15 14:20:18 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	skip_ws(char **str, long int *is_neg)
{
	int	has_plus;

	has_plus = 0;
	while ((**str == '\t' || **str == '\n' || **str == ' ' || **str == '\r' ||
			**str == '\f' || **str == '\v') && **str)
		(*str)++;
	if (**str == '+')
	{
		(*str)++;
		has_plus = 1;
	}
	if (**str == '-')
	{
		if (has_plus)
			return (1);
		*is_neg = -1;
		(*str)++;
	}
	return (0);
}

int			ft_atoi(const char *str)
{
	long int			is_neg;
	unsigned long int	res;
	unsigned long int	prev_res;

	is_neg = 1;
	if (skip_ws((char **)&str, &is_neg))
		return (0);
	res = 0;
	while (*str)
	{
		prev_res = res;
		if (!ft_isdigit(*str))
			break ;
		res *= 10;
		res += *str - '0';
		if (prev_res > res)
			return (is_neg == -1 ? 0 : -1);
		str++;
	}
	return ((int)res * is_neg);
}
