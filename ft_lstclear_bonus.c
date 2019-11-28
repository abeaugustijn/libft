/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                     +:+                    */
/*   By: abe <abe@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 19:46:00 by abe            #+#    #+#                */
/*   Updated: 2019/11/28 12:38:14 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
#include <stdlib.h>

/*
**	Clear a list. The 'del' function is called with the 'content' pointer of
**	every node to free this memory. The 'lst' pointer will be set to NULL to
**	indicate that the list is cleared.
*/

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	**lst_tmp;
	t_list	*lst_tmp2;

	lst_tmp = lst;
	while (*lst)
	{
		del((*lst)->content);
		lst_tmp2 = *lst;
		*lst = (*lst)->next;
		free(lst_tmp2);
	}
	*lst_tmp = NULL;
}
