/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cchr_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusti <aaugusti@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 19:42:23 by aaugusti          #+#    #+#             */
/*   Updated: 2020/04/08 19:42:23 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Count the amount of occurences of c in s.
*/

int		ft_cchr(const char *s, char c)
{
	int		res;

	res = 0;
	while (*s)
	{
		if (*s == c)
			res++;
		s++;
	}
	return (res);
}
