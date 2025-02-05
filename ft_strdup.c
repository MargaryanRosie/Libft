
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romargar <romargar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 13:42:11 by romargar          #+#    #+#             */
/*   Updated: 2025/02/05 13:42:13 by romargar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strdup(const char *s)
{
	char	*str;

	str = (char*)malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s, ft_strlen(s) + 1);
	return (str);
}

/*
int main()
{
	char s[] = "hello world";
	char *str = ft_strdup(s);

	printf("%s\n", str);

	return 0;
}
*/