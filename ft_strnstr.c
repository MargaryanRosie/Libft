#include "libft.h"
#include <stdio.h>

char    *ft_strnstr(const char *str, const char *needle, size_t len)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    if (!*needle)
        return ((char *)str);
    while (str[i] && i < len)
    {
        if (str[i] == needle[0])
			{
			while (needle[j] && str[i + j] == needle[j])
			{
				if (needle[j + 1] == '\0')
					return((char *)&str[i]);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char *str = "HelloWorldmm";
	char *needle = "World";

	char *ptr = ft_strnstr(str, needle, 15);
	printf("%s\n", ptr);
	return 0;
}
*/