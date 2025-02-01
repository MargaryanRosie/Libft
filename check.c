

#include <string.h>
#include <bsd/string.h> 
#include "libft.h"

int	main(void)
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

	char src[] = "helloooooooooo";
	char dest[8] = "hello";
	size_t n = strlcat(dest, src, 25);

	printf("%s\n", dest);
	printf("%zu\n", n);

	char arr[] = "hello";
	//printf("%zu", sizeof(arr));

	int m = strncmp(dest, src, 0);
	printf("%d\n", m);

	char c = -5;
	unsigned char mmm = (unsigned char)c;
	printf("%c\n", mmm);

	return 0;
}
