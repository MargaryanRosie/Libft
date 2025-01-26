#include <stdio.h>
#include "libft.h"
#include <stddef.h>

size_t	ft_strlcat(char* dst, const char* src, size_t dstsize)
{
	size_t src_length;
	size_t dst_length;
	size_t total_length;
	size_t space;
	size_t	i;
   
	src_length = ft_strlen(src);
	dst_length = ft_strlen(dst);
	total_length = ft_strlen(src) + ft_strlen(dst);
	space = dstsize - ft_strlen(dst) - 1;

	if (dstsize <= dst_length)
	{
		return (total_length);
	}

	else
	{
		i = 0;
		while (src[i] && i < space)
  		{
			dst[dst_length + i] = src[i];
			i++;
		}

		dst[dst_length + i] = '\0';

		return (total_length);	
	}
}

int main()
{
	/*
	//normal
	char src[] = "World";
	char dst[15] = "Hello, ";
	size_t n = ft_strlcat(dst, src, sizeof(dst));

	printf("%s\n", dst);
	printf("%zu\n", n);

	//dst-i mej bavakanachap tex chka
	char srcc[] = "World";
	char dstt[9] = "Hello, ";
	size_t n1 = ft_strlcat(dstt, srcc, sizeof(dstt));

	printf("%s\n", dstt);
	printf("%zu\n", n1);
	*/

	//dest-y null termination chuni
	char srccc[] = "World";
	char dsttt[5] = "Hello";
	size_t n2 = ft_strlcat(dsttt, srccc, sizeof(dsttt));

	//printf("%s\n", dsttt);
	printf("%zu\n", n2);

	//null termination chka desti mej, dra hamar sovorakani nman kashxati


	/*
	//dest-i mej tex chka, bayc ka null termination

	char srcccc[] = "World";
	char dstttt[6] = "Hello";
	size_t n3 = ft_strlcat(dstttt, srcccc, sizeof(dstttt));

	printf("%s\n", dstttt);
	printf("%zu\n", n3);

	//empty dst

	char src1[] = "World";
	char dst1[10] = "";
	size_t n4 = ft_strlcat(dst1, src1, sizeof(dst1));

	printf("%s\n", dst1);
	printf("%zu\n", n4);
	*/

	return 0;
}
