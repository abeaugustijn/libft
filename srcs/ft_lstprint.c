/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstprint.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <aaugusti@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 15:33:08 by aaugusti       #+#    #+#                */
/*   Updated: 2019/11/01 16:09:11 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lstprint(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		ft_putstr_fd("Index:\t\t", 1);
		ft_putnbr_fd(i, 1);
		ft_putstr_fd("\nContent:\t", 1);
		ft_putchar_fd('"', 1);
		ft_putstr_fd(lst->content, 1);
		ft_putchar_fd('"', 1);
		ft_putstr_fd("\nNext:\t\t", 1);
		ft_putnbr_fd((int)lst->next, 1);
		ft_putstr_fd("\n\n", 1);
		lst = lst->next;
		i++;
	}
}
