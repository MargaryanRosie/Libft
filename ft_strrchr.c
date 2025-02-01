#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	size_t	len;

	str = (char *)s;
	len = ft_strlen(s);
	while (len--)
	{
		str++;
	}
	if (c == '\0')
		return (str);
	else
		str--;
	while (s <= str)
	{
		if (*str == c)
			return (str);
		str--;
	}
	return (NULL);
}

/*
int main()
{
	char *str = "helloookkk";
	char c = 'l';

	char *ptr = ft_strrchr(str, c);
	printf("%s\n", ptr);
	return 0;
}
*/
