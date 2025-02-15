#include <stdio.h>
#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s)
		return;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*
void	f_to_lower(unsigned int i, char *cptr)
{
	if (i % 2 == 0)
	{
		if (*cptr >= 'A' && *cptr <= 'Z')
			*cptr = *cptr + 32;
	}
}

int	main()
{
	char s[] = "HELLO";
	ft_striteri(s, &f_to_lower);

	printf("%s\n", s);
	return 0;
}
*/


	