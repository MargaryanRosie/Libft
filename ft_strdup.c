#include "libft.h"
#include <stdio.h>

char *ft_strdup(const char *s)
{
	char	*str;

	str = (char*)malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s, ft_strlen(s) + 1);
	return (str);
}

/*
int main()
{
	char s[] = "hello world";
	char *str = ft_strdup(s);

	printf("%s\n", str);

	return 0;
}
*/