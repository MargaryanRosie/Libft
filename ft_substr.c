/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romargar <romargar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 13:37:45 by romargar          #+#    #+#             */
/*   Updated: 2025/02/15 16:39:25 by romargar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	s = s + start;
	i = 0;
	while (*s && i < len)
	{
		*ptr = *s;
		s++;
		ptr++;
		i++;
	}
	*ptr = '\0';
	ptr = ptr - len;
	return (ptr);
}

/*
int	main(void)
{
	char	*str;
	char	*ptr;

	str = "  hello   ghj aaa";
	ptr = ft_substr(str, 2, 60);
	printf ("%s\n", ptr);
	return (0);
}
*/
