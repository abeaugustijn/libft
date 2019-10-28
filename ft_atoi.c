/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 12:45:05 by aaugusti          #+#    #+#             */
/*   Updated: 2019/10/28 13:08:56 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int			ft_atoi(char *str)
{
	int	is_neg;
	int	res;

	if (*str == '\t' || *str == '\n' || *str == ' ' || *str == '\r' ||
			*str == '+')
		str++;
	is_neg = 1;
	if (*str == '-')
	{
		is_neg = -1;
		str++;
	}
	res = 0;
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (0);
		res *= 10;
		res += *str - '0';
		str++;
	}
	return (res * is_neg);
}
