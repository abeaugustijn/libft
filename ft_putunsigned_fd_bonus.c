/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned_fd_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 15:47:54 by aaugusti          #+#    #+#             */
/*   Updated: 2019/12/06 15:48:25 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

/*
**	Output the unsigned long long 'n' to 'fd'.
*/

void		ft_putunsigned_fd(unsigned long long n, int fd)
{
	if (n < 10)
		ft_putchar_fd((char)(n + '0'), fd);
	else
	{
		ft_putunsigned_fd(n / 10, fd);
		ft_putchar_fd((char)((n % 10) + '0'), fd);
	}
}
