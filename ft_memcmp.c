
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romargar <romargar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:40:49 by romargar          #+#    #+#             */
/*   Updated: 2025/02/05 13:40:52 by romargar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	if (n == 0)
		return (0);
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while ((*ptr1 == *ptr2) && n - 1 > 0)
	{
		ptr1++;
		ptr2++;
		n--;
	}
	return (*ptr1 - *ptr2);
}

/*
int main(void)
{
	printf ("%d\n", ft_memcmp("","test", 4));
}

*/