/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romargar <romargar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:44:39 by romargar          #+#    #+#             */
/*   Updated: 2025/02/15 16:38:12 by romargar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *str, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*needle)
		return ((char *)str);
	while (str[i] && i < len)
	{
		if (str[i] == needle[0])
		{
			j = 0;
			while (str[i + j] && str[i + j] == needle[j] && (i + j) < len)
			{
				if (needle[j + 1] == '\0')
					return ((char *)&str[i]);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	char	str[] = "lorem ipsum dolor sit amet";
	char	str2[] = "dolor";
	char	*ptr;

	ptr = ft_strnstr(str, str2, 15);
	if(ptr == NULL)
		printf("The function returns NULL");
	else
		printf("%s\n", ptr);
	return (0);
}
*/
