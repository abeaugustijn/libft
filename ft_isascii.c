/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 12:19:55 by aaugusti       #+#    #+#                */
/*   Updated: 2019/11/28 12:18:46 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Returns 1 or 0 based on whether the char is in the ascii table.
*/

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
