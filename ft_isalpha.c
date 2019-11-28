/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                     +:+                    */
/*   By: aaugusti <marvin@42.fr>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 12:26:03 by aaugusti       #+#    #+#                */
/*   Updated: 2019/11/28 12:18:03 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Returns 1 or 0 based on whether the given char is in the alphabet.
*/

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z'));
}
