
#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*cptr;
	size_t			i;

	i = 0;
	cptr = (unsigned char *)b;
	while (i < len)
	{
		cptr[i] = c;
		i++;
	}
	return (b);
}

/*
int main()
{
	char str[4] = {'a', 'b', 'c', 'd'};
	ft_memset(str, '?', 2);

	int i;
	i = 0;

	while (str[i])
	{
		printf("%c", str[i]);
		i++;
	}

	printf("\n");

	int arr[5] = {1, 2, 3, 4, 5};
	ft_memset(arr, 0, 8);
		
	i = 0;

	while(i < 5)
	{
		printf("%d",arr[i]);
		i++;
	}
	return 0;
}
*/



