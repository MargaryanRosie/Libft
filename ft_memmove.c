#include <stdio.h>
#include <string.h>

void * ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *cptr1;
	unsigned char *cptr2;
	size_t	i;

	cptr1 = (unsigned char*)dst;
	cptr2 = (unsigned char*)src;

	if(!dst && !src)
		return (NULL);

	if (dst <= src)
	{
		while (len--)
		{
			*cptr1++ = *cptr2++;
		}
	}
	else
	{
		cptr1 = cptr1 + len - 1;
		cptr2 = cptr2 + len - 1;

		while (len--)
		{
			*cptr1-- = *cptr2--;
		}
	}
	return (dst);
}
/*
int main()
{
	char str[] = "abcdefmknl";
	ft_memmove(str + 3, str, 5);

	printf ("%s", str + 3);
	return 0;
}
*/
