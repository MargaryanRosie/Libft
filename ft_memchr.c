#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	size_t i;
	void *m =(void*)s;
   
	str = (unsigned char *)s;

	i = 0;
	while (str[i] && i < n)
	{
		if (str[i] == c)
		{
			m = &str[i];
			return(m);
		}
		i++;
	}
	return (NULL);
}

int main()
{
	char ptr[] = "hellooooo";
	char c = 'l';
	char *p = ft_memchr(ptr ,c ,8);
	printf("%s", p);

	int arr[] = {1, 2, 3};
	int k = 2;
	int *int_ptr = ft_memchr(arr, k, 3);
	printf("%
	return 0;
}
