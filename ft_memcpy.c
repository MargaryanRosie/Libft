/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romargar <romargar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:41:00 by romargar          #+#    #+#             */
/*   Updated: 2025/02/15 16:36:02 by romargar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*cptr1;
	unsigned char	*cptr2;
	size_t			i;

	cptr1 = (unsigned char *)dst;
	cptr2 = (unsigned char *)src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		cptr1[i] = cptr2[i];
		i++;
	}
	return (dst);
}

/*
int	main(void)
{
	char	dst[10];
	char	src[] = {'a', 'b', 'c', 'd', 'e'};
	int		i;
	int		arr2[10];
	int		arr1[] = {1, 2, 3, 4, 5, 6, 7};

	ft_memcpy(dst, src, 3);
	i = 0;
	while (i < 10)
	{
		printf("%c ", dst[i]);
		i++;
	}
	printf("\n");
	ft_memcpy(arr2, arr1, 8);
	i = 0;
	while(i < 10)
	{
		printf("%d ", arr2[i]);
		i++;
	}
	return (0);
}
*/
