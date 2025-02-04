#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int sign;
	int result;

	sign = 1;
	result = 0;
	i = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if(nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result*10;
		result = result + nptr[i] - 48;
		i++;
	}
	return (sign * result);
}

/*
int main()
{
	char str[] = "   -3456dhdj4373";
	int a = ft_atoi(str);

	printf("%d", a);

	return 0;
}
*/



