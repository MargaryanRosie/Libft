#include <stdio.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int	i;
	int	len;
	char	*str;

	len = ft_strlen(s);
	str = (char*)malloc(sizeof(char) * (len + 1));
	if(!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
char	f_to_lower(unsigned int i, char c)
{
	if (i % 2 == 0)
	{
		if (c >= 'A' && c <= 'Z')
			c = c + 32;
	}
	return (c);
}

int	main()
{
	char *s;
	char *str;

	s = "HELLO";
	str = ft_strmapi(s, &f_to_lower);

	printf("%s\n", str);
	free(str);
	return 0;
}

*/