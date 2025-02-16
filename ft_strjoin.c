#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	char	*start;

	if (!s1 || !s2)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!ptr)
		return (NULL);
	start = ptr;
	while (*s1)
	{
		*ptr = *s1;
		ptr++;
		s1++;
	}
	while (*s2)
	{
		*ptr = *s2;
		ptr++;
		s2++;
	}
	*ptr = '\0';
	return (start);
}

/*
int	main(void)
{
	char	*s1;
	char	*s2;
	char	*ptr;

	s1 = "hello";
	s2 = "world";
	ptr = ft_strjoin(s1, s2);
	printf("%s\n", ptr);
	return (0);
}
	*/