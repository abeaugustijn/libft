/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   tests.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: abe <abe@student.codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 21:19:20 by abe            #+#    #+#                */
/*   Updated: 2019/10/29 21:50:02 by abe           ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int	test_isprint()
{
	if ((ft_isprint('a') > 0) != (isprint('a')) > 0) return (1);
	if ((ft_isprint('A') > 0) != (isprint('A')) > 0) return (1);
	if ((ft_isprint('z') > 0) != (isprint('z')) > 0) return (1);
	if ((ft_isprint('Z') > 0) != (isprint('Z')) > 0) return (1);
	if ((ft_isprint('\01') > 0) != (isprint('\01')) > 0) return (1);
	if ((ft_isprint('\12') > 0) != (isprint('\12')) > 0) return (1);
	if ((ft_isprint('\0') > 0) != (isprint('\0')) > 0) return (1);
	if ((ft_isprint('\n') > 0) != (isprint('\n')) > 0) return (1);
	if ((ft_isprint('%') > 0) != (isprint('%')) > 0) return (1);
	if ((ft_isprint('o') > 0) != (isprint('o')) > 0) return (1);
	return (0);
}

int	test_isascii()
{
	if ((ft_isascii('a') > 0) != (__isascii('a')) > 0) return (1);
	if ((ft_isascii('A') > 0) != (__isascii('A')) > 0) return (1);
	if ((ft_isascii('z') > 0) != (__isascii('z')) > 0) return (1);
	if ((ft_isascii('Z') > 0) != (__isascii('Z')) > 0) return (1);
	if ((ft_isascii('0') > 0) != (__isascii('0')) > 0) return (1);
	if ((ft_isascii('^') > 0) != (__isascii('^')) > 0) return (1);
	if ((ft_isascii('\0') > 0) != (__isascii('\0')) > 0) return (1);
	if ((ft_isascii('\n') > 0) != (__isascii('\n')) > 0) return (1);
	if ((ft_isascii('%') > 0) != (__isascii('%')) > 0) return (1);
	if ((ft_isascii('o') > 0) != (__isascii('o')) > 0) return (1);
	return (0);
}

int	test_isalnum()
{
	if ((ft_isalnum('a') > 0) != (isalnum('a')) > 0) return (1);
	if ((ft_isalnum('A') > 0) != (isalnum('A')) > 0) return (1);
	if ((ft_isalnum('z') > 0) != (isalnum('z')) > 0) return (1);
	if ((ft_isalnum('Z') > 0) != (isalnum('Z')) > 0) return (1);
	if ((ft_isalnum('0') > 0) != (isalnum('0')) > 0) return (1);
	if ((ft_isalnum('^') > 0) != (isalnum('^')) > 0) return (1);
	if ((ft_isalnum('\0') > 0) != (isalnum('\0')) > 0) return (1);
	if ((ft_isalnum('\n') > 0) != (isalnum('\n')) > 0) return (1);
	if ((ft_isalnum('%') > 0) != (isalnum('%')) > 0) return (1);
	if ((ft_isalnum('o') > 0) != (isalnum('o')) > 0) return (1);
	return (0);
}

int	test_memset()
{
	char *buf1, *buf2;
	void *res1, *res2;
	buf1 = (char*)malloc(10);
	buf2 = (char*)malloc(10);
	res1 = ft_memset(buf1, 'a', 10);
	res2 =    memset(buf2, 'a', 10);
	if (strncmp(buf1, buf2, 10) != 0) return (1);
	if (strncmp(res1, res2, 10) != 0) return (1);
	return (0);
}

int main()
{
	printf("%s\t\t%s\n", test_memset() ? "FAIL" : "SUCCESS", "memset");
	printf("%s\t\t%s\n", test_isalnum() ? "FAIL" : "SUCCESS", "alnum");
	printf("%s\t\t%s\n", test_isascii() ? "FAIL" : "SUCCESS", "ascii");
	printf("%s\t\t%s\n", test_isprint() ? "FAIL" : "SUCCESS", "print");
}