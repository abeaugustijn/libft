/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                     +:+                    */
/*   By: aaugusti <aaugusti@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 16:01:56 by aaugusti       #+#    #+#                */
/*   Updated: 2019/11/04 19:39:27 by abe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int	res;

	res = 0;
	while (lst)
	{
		res++;
		lst = lst->next;
	}
	return (res);
}
