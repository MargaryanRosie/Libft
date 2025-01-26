#include "libft.h"
#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char* cptr;
	size_t i;

	cptr = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		cptr[i] = 0;
		i++;
	}
}

/*
int main()
{
	char str[] = {'a', 'b', 'c', 'd'};
	ft_bzero(str, 2);

	int i = 0;
	while (i < sizeof(str)/sizeof(str[0]))
	{
		printf("%c ", str[i]);
		i++;
	}

	printf("\n");

	int arr[5] = {1, 2, 3, 4, 5};
	ft_bzero(arr, 8);

	i = 0;
	while (i < 5)
	{
		printf("%d", arr[i]);
		i++;
	}
	return 0;
}
*/
