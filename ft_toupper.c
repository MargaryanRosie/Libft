#include <stdio.h>
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (c - 32); 
	}
	return (c);
}

int main()
{
	char c = 'a';
	char m = ft_toupper(c);

	printf("%c", m);
}

