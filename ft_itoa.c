/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romargar <romargar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 13:30:27 by romargar          #+#    #+#             */
/*   Updated: 2025/02/15 13:30:30 by romargar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

static int	size_count(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

static void	to_str(char *str, int n, int len)
{
	str[len] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return ;
	}
	while (n != 0)
	{
		str[len - 1] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	int		number;

	len = size_count(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (n == INT_MIN)
	{
		str[0] = '-';
		str[1] = '2';
		number = 147483648;
		to_str(str + 2, number, len - 2);
	}
	else if (n < 0)
	{
		str[0] = '-';
		number = -n;
		to_str(str + 1, number, len - 1);
	}
	else
	{
		number = n;
		to_str(str, number, len);
	}
	return (str);
}
/*
int	main(void)
{
	int		number;
	char	*str;

	number = INT_MIN;
	str = ft_itoa(number);
	printf("%s\n", str);
	free(str);
	return (0);
}
*/