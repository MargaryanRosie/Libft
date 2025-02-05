
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romargar <romargar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:43:54 by romargar          #+#    #+#             */
/*   Updated: 2025/02/05 13:53:50 by romargar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i, j;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);

	if (dstsize < dst_len + 1)
		return (dstsize + src_len);
	if (dstsize == 0)
		return (src_len);
	i = 0;
	while (i < dst_len)
	{
		i++;
	}
	j = 0;
	while (i < dstsize - 1 && j < src_len)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + src_len);
}

/*
int main()
{
	
	char dst[10] = "hello";
	char src[] = "hellooooookkkk";
	
	//the case when size is smaller than the actual dst size
	size_t n = ft_strlcat(dst, src, 3);

	printf("%s\n", dst);
	printf("%zu\n", n);
	
	
	//the case when size is 0
	
	char dst1[11] = "h";
	char src1[] = "lorem";
	size_t n2 = ft_strlcat(dst1, src1, 15);

	printf("%s\n", dst1);
	printf("%zu\n", n2);

	return 0;
}
*/
