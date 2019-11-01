/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abe <abe@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 19:46:00 by abe            #+#    #+#                */
/*   Updated: 2019/11/01 17:50:51 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <libft.h>
#include <stdlib.h>

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
