/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romargar <romargar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:35:15 by romargar          #+#    #+#             */
/*   Updated: 2025/02/15 16:35:55 by romargar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*cptr;
	size_t			i;

	i = 0;
	cptr = (unsigned char *)b;
	while (i < len)
	{
		cptr[i] = c;
		i++;
	}
	return (b);
}

/*
int	main(void)
{
	char	str[4] = {'a', 'b', 'c', 'd'};
	int		i;
	int		arr[5] = {1, 2, 3, 4, 5};

	ft_memset(str, '?', 2);
	i = 0;
	while (str[i])
	{
		printf("%c", str[i]);
		i++;
	}
	printf("\n");
	ft_memset(arr, 0, 8);
	i = 0;
	while(i < 5)
	{
		printf("%d",arr[i]);
		i++;
	}
	return (0);
}
*/
