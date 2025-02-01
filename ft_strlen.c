
#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

/*
int	main(void)
{
	size_t	k;

	char str[4] = "abcd";
	k = ft_strlen(str);
	printf("%zu\n", k);
}
*/
