#include <stdio.h>
#include "libft.h"
#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s++ == c)
		{
			return ((char*)s - 1);
		}
	}
	if (c == '\0')
		return ((char*)s);
	return (NULL);
}

/*
int main()
{
	char str[] = "hello";
	char *ptr;

	ptr = ft_strchr(str, '\0');

	printf("%s\n", ptr);
}
*/
