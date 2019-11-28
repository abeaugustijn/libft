/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 12:17:12 by aaugusti       #+#    #+#                */
/*   Updated: 2019/11/28 12:19:28 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Returns 1 or 0 based on whether the char is printable.
*/

int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}
