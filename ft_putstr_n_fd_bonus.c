/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_n_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 15:42:20 by aaugusti          #+#    #+#             */
/*   Updated: 2019/11/15 15:42:21 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	ft_putstr_n_fd(char *s, size_t n, int fd)
{
	size_t	i;

	i = 0;
	while (s[i] && i < n)
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
