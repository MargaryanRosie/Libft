/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romargar <romargar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:44:02 by romargar          #+#    #+#             */
/*   Updated: 2025/02/15 13:45:00 by romargar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

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
int	main(void)
{
	char	src[] = "Hel";
	char	dst[10];
	size_t	n;
	size_t	n_original;

	n = ft_strlcpy(dst, src, 10);
	printf("dest: %s\n", dst);
	printf("n: %zu\n", n);
	n_original = strlcpy(dst, src, 10);
	printf("dest_original: %s\n", dst);
	printf("n_original: %zu\n", n_original);
	return (0);
}
*/
