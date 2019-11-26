/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstcount_condition.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <aaugusti@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 11:16:16 by aaugusti       #+#    #+#                */
/*   Updated: 2019/11/05 11:19:52 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstcount_condition(t_list *lst, int (*f)(void *))
{
	int	res;

	res = 0;
	while (lst)
	{
		if (f(lst->content))
			res++;
		lst = lst->next;
	}
	return (res);
}
