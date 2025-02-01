#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
int main ()
{
	char *str = "abcd";
	char c = '\0';

	printf("%c\n", *ft_strchr(str, c));
	return 0;
}
*/