/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: aaugusti <aaugusti@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 13:29:47 by aaugusti       #+#    #+#                */
/*   Updated: 2019/11/01 17:53:06 by aaugusti      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <libft.h>
#include <stdlib.h>

static void	del(void *content)
{
	free(content);
}

static char	**list_to_array(t_list *head)
{
	char	**res;
	size_t	list_len;
	int		i;
	t_list	*list;

	list = head;
	list_len = (size_t)ft_lstsize(head);
	res = (char **)malloc(sizeof(char *) * (list_len + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (head)
	{
		res[i] = (char *)malloc(ft_strlen(head->content));
		if (res[i] == NULL)
			return (NULL);
		ft_strlcpy(res[i], head->content, ft_strlen(head->content) + 1);
		head = head->next;
		i++;
	}
	res[i] = NULL;
	ft_lstclear(&list, del);
	return (res);
}

char		**ft_split(char const *s, char c)
{
	char	*b;
	t_list	*res;
	int		i;
	char	*to_add_str;
	size_t	to_add_len;

	b = (char*)s;
	i = 0;
	res = NULL;
	while (*b)
	{
		while (*b == c)
			b++;
		if (*b == 0)
			break ;
		to_add_len = ft_strlen_c(b, c);
		to_add_str = (char *)malloc(to_add_len + 1);
		if (to_add_str == NULL)
			return (NULL);
		ft_strlcpy(to_add_str, (const char *)b, to_add_len + 1);
		ft_lstadd_back(&res, ft_lstnew(to_add_str));
		b += to_add_len;
	}
	return (list_to_array(res));
}
