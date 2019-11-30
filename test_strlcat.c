#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

void	do_test(char *dst, char *src, size_t dstsize)
{
	char *dst1, *dst2, *src1, *src2;
	size_t res1, res2;
	static int count = 0;

	dst1 = strdup(dst);
	dst2 = strdup(dst);

	src1 = strdup(src);
	src2 = strdup(src);

	res1 = strlcat(dst1, src1, dstsize);
	res2 = ft_strlcat(dst2, src2, dstsize);

	if (strcmp(dst1, dst2) || strcmp(src1, src2) || res1 != res2)
		printf("%9s TEST #%d\n", "FAILED", count);
	else
		printf("%9s TEST #%d\n", "SUCCEEDED", count);
	free(dst1);
	free(dst2);
	free(src1);
	free(src2);
	count++;
}

int main(void)
{
	/*  0 */ do_test("basic", " test", strlen("basic test") + 1);
	/*  1 */ do_test("basic", " test", strlen("basic test"));
	/*  2 */ do_test("", "", 1);
	/*  3 */ do_test("", "", 0);
	/*  4 */ do_test("", "", 10000);
	/*  5 */ do_test("basic", " test", 100000);
	/*  6 */ do_test("basic", " test", 3);
	/*  7 */ do_test("basic", " test", 121);
	/*  8 */ do_test("basic", " test", 0);
	/*  9 */ do_test("basic", " test", 8);
	/* 10 */ do_test("basic", " test", 9);
}
