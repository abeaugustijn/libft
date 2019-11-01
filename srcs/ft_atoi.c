/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 12:45:05 by aaugusti       #+#    #+#                */
/*   Updated: 2019/11/01 17:52:00 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static void	skip_ws(char **str)
{
	while (**str == '\t' || **str == '\n' || **str == ' ' || **str == '\r' ||
			**str == '\f' || **str == '\v')
		(*str)++;
	if (**str == '+')
		(*str)++;
}

int			ft_atoi(const char *str)
{
	long int			is_neg;
	unsigned long int	res;
	unsigned long int	prev_res;

	skip_ws((char **)&str);
	is_neg = 1;
	if (*str == '-')
	{
		is_neg = -1;
		str++;
	}
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
