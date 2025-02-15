#include "libft.h"
#include <stdio.h>
#include <limits.h>

void ft_putnbr_fd(int n, int fd)
{
    if (n == INT_MIN)
    {
        ft_putstr_fd("-2147483648", fd);
        return; 
    }
    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        n = -n;
    }
    if (n > 9)
    {
        ft_putnbr_fd(n / 10, fd);
    }
    ft_putchar_fd(n % 10 + '0', fd); 
}


/*
int main()
{
	int n = 345;
	ft_putnbr_fd(n, 1);
	return 0;
}
*/
