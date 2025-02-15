/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romargar <romargar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:44:50 by romargar          #+#    #+#             */
/*   Updated: 2025/02/15 16:57:31 by romargar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	size_t	len;

	str = (char *)s;
	len = ft_strlen(s);
	while (len--)
	{
		str++;
	}
	if ((char)c == '\0')
		return (str);
	else
		str--;
	while (s <= str)
	{
		if (*str == (unsigned char)c)
			return (str);
		str--;
	}
	return (NULL);
}

/*
int	main(void)
{
	char	*str;
	char	c;
	char	*ptr;

	str = "helloookkk";
	c = 'l';
	ptr = ft_strrchr(str, c);
	printf("%s\n", ptr);
	return (0);
}
*/
