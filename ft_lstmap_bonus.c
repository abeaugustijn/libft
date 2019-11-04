/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                     +:+                    */
/*   By: abe <abe@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 20:15:57 by abe            #+#    #+#                */
/*   Updated: 2019/11/04 19:39:15 by abe              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*new;
	void	*new_content;

	res = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		if (new_content == NULL)
			del(lst->content);
		new = ft_lstnew(new_content);
		ft_lstadd_back(&res, new);
		lst = lst->next;
	}
	return (res);
}
