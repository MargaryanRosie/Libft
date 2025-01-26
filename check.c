#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main()
{
	/*
	char src[] = "Worl";
	char dst[3] = "AAA";

	size_t n = strlcat(dst, src, sizeof(dst));
	printf("%s\n", dst);
	printf("%zu\n", n);

	//normal
	char src[] = "World";
	char dst[15] = "Hello, ";
	size_t n = strlcat(dst, src, sizeof(dst));

	printf("%s\n", dst);
	printf("%zu\n", n);

	//dst-i mej bavakanachap tex chka
	char srcc[] = "World";
	char dstt[9] = "Hello, ";
	size_t n1 = strlcat(dstt, srcc, sizeof(dstt));

	printf("%s\n", dstt);
	printf("%zu\n", n1);

	//dest-y null termination chuni
	char srccc[] = "World";
	char dsttt[5] = "Hello";
	size_t n2 = strlcat(dsttt, srccc, sizeof(dsttt));

	printf("%s\n", dsttt);
	printf("%zu\n", n2);

	//null termination chka desti mej, dra hamar sovorakani nman kashxati
	

	//dest-i mej tex chka, bayc ka null termination
	
	char srcccc[] = "World";
	char dstttt[6] = "Hello";
	size_t n3 = strlcat(dstttt, srcccc, sizeof(dstttt));

	printf("%s\n", dstttt);
	printf("%zu\n", n3);

	//empty dst
	
	char src1[] = "World";
	char dst1[10] = "";
	size_t n4 = strlcat(dst1, src1, sizeof(dst1));

	printf("%s\n", dst1);
	printf("%zu\n", n4);

	//char str[7] = "Hellooo";
	//printf("%zu\n",ft_strlen(str));
	//
	*/

	char s[] = "abdcd";

	char c = 'd';
	char *result = strchr(s, c);

	printf("result: %s", result);

	return 0;
}
