
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romargar <romargar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:44:02 by romargar          #+#    #+#             */
/*   Updated: 2025/02/05 13:44:05 by romargar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize != 0)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/*
int main()
{
	char src[] = "Hel";
	char dst[10];

	size_t n = ft_strlcpy(dst, src, 10);

	printf("dest: %s\n", dst);
	printf("n: %zu\n", n);

	size_t n_original = strlcpy(dst, src, 10);

	printf("dest_original: %s\n", dst);
	printf("n_original: %zu\n", n_original); 

	return 0;
}
*/
