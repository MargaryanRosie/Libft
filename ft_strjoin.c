#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	ptr = (char*)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!ptr)
		return (NULL);
	while (*s1)
	{
		*ptr = *s1;
		s1++;
		ptr++;
	}
	while (*s2)
	{
		*ptr = *s2;
		s2++;
		ptr++;
	}
	*ptr = '\0';
	ptr = ptr - (len1 + len2);
	return (ptr);	
}


/*
int main()
{
	char *s1 = "hello";
	char *s2 = "world";
	char *ptr;
	ptr = ft_strjoin(s1, s2);
	printf("%s\n", ptr);
	return 0;
}

*/