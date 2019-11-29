/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugusti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 12:27:24 by aaugusti          #+#    #+#             */
/*   Updated: 2019/11/29 09:00:58 by aaugusti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

void	test_all()
{
	ft_atoi("123");
	ft_bzero(NULL, 0);
	ft_isalnum('c');
	ft_isalpha('c');
	ft_isascii('\0');
	ft_isdigit('1');
	ft_isprint('a');
	ft_memccpy(NULL, NULL, 'c', 123);
	ft_memchr("jalalal", 'l', 123);
	ft_memcpy(NULL, NULL, 123);
	ft_memchr("mkdfmd", 'c', 123);
	ft_memcpy(NULL, NULL, 123);
	ft_memmove(NULL, NULL, 0);
	ft_memset(NULL, 'a', 123);
	ft_strchr("str", 'c');
	ft_strlcat("jalala", "test", 3);
	ft_strlcpy(NULL, NULL, 123);
	ft_strlen("test");
	ft_strncmp("test", "test", 4);
	ft_strnstr("jalalalla", "la", 10);
	ft_strrchr("test", 't');
	ft_tolower('A');
	ft_toupper('a');
	ft_calloc(10, 14);
	ft_itoa(123);
	ft_putchar_fd('a', 1);
	ft_putendl_fd("jajajaja", 1);
	ft_putstr_fd("test\n", 1);
	ft_putnbr_fd(123123, 1);
	ft_split("dit is een testest", ' ');
	ft_strjoin("poep", "gat");
	ft_strmapi("jalalala", NULL);
	ft_strtrim("   jajaja\t\t\n\n  ", "\t \n");
	ft_substr("testjalalalla", 3, 4);
	ft_strdup("jalalal");
}

void free_lst(char **lst)
{
	if (!lst)
		return ;
	int i = 0;
	while (lst[i])
	{
		free(lst[i]);
		i++;
	}
	free(lst);
}

int main(void)
{
	char *itoa;
	printf("=== ITOA ===\n");
	printf("%s == 123123\n", itoa = ft_itoa(123123)); free(itoa);
	printf("%s == INT_MAX\n", itoa = ft_itoa(INT_MAX)); free(itoa);
	printf("%s == INT_MIN\n", itoa = ft_itoa(INT_MIN)); free(itoa);
	printf("%s == 0\n", itoa = ft_itoa(0)); free(itoa);

	printf("\n=== MEMCHR ===\n");
	printf("%s == \"xabc\"\n", ft_memchr("jalalalalalxabc", 'x', 10000));
	printf("%s == (null)\n", ft_memchr("jajajajajajajajajajjajaa", 'x', 14));

	printf("\n=== MEMCPY ===\n");
	char *res = malloc(10);
	ft_memcpy(res, "test", 4);
	printf("%s == \"test\"\n", res);
	ft_memcpy(res, "jalalalalalala", 4);
	printf("%s == \"jala\"\n", res);
	ft_memcpy(res, "ja", 2);
	printf("%s == ja\n", res);
	free(res);

	printf("\n=== MEMMOVE ===\n");
	res = malloc(10);
	ft_memmove(res, "test", 4);
	printf("%s == \"test\"\n", res);
	ft_memmove(res, "jalalalalalala", 4);
	printf("%s == \"jala\"\n", res);
	ft_memmove(res, "ja", 2);
	printf("%s == ja\n", res);
	free(res);

	printf("\n=== PUTNBR ===\n");
	ft_putnbr_fd(123, 1);
	printf(" == 123\n");
	ft_putnbr_fd(-123, 1);
	printf(" == -123\n");
	ft_putnbr_fd(INT_MIN, 1);
	printf(" == INT_MIN\n");
	ft_putnbr_fd(INT_MAX, 1);
	printf(" == INT_MAX\n");
	ft_putnbr_fd(0, 1);
	printf(" == 0\n");

	printf("\n=== PUTSTR ===\n");
	ft_putstr_fd("test ja\n", 1);

	printf("\n=== SPLIT ===\n");
	char **res2;
	int i;

	res2 = ft_split("     testjdf bsf jweif    ", ' ');
	i = 0;
	while (res2 && res2[i])
	{
		printf("[%s]\n", res2[i]);
		i++;
	}
	free_lst(res2);

	res2 = ft_split("", ' ');
	i = 0;
	while (res2 && res2[i])
	{
		printf("[%s]\n", res2[i]);
		i++;
	}
	free_lst(res2);

	res2 = ft_split(NULL, ' ');
	i = 0;
	while (res2 && res2[i])
	{
		printf("[%s]\n", res2[i]);
		i++;
	}
	free_lst(res2);

	res2 = ft_split(NULL, 0);
	i = 0;
	while (res2 && res2[i])
	{
		printf("[%s]\n", res2[i]);
		i++;
	}
	free_lst(res2);

	res2 = ft_split("                             ", ' ');
	i = 0;
	while (res2 && res2[i])
	{
		printf("[%s]\n", res2[i]);
		i++;
	}
	free_lst(res2);

	printf("\n=== STRNSTR ===\n");
	printf("%s == (null)\n", ft_strnstr("test", "x", 1000));
	printf("%s == \"est\"\n", ft_strnstr("test", "e", 1000));
	printf("%s == (null)\n", ft_strnstr("test", "x", 1));
	printf("%s == \"test\"\n", ft_strnstr("test", "t", 5));

}

