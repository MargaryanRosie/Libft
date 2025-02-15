/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romargar <romargar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 13:39:48 by romargar          #+#    #+#             */
/*   Updated: 2025/02/15 16:41:41 by romargar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char const *set, char c)
{
	if (!set)
		return (0);
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*new_ptr;
	int		i;

	if (!s1 || !set)
		return (NULL);
	while (*s1)
	{
		if (check_set(set, *s1) == 1)
			s1++;
		else
			break ;
	}
	len = ft_strlen(s1);
	while (len > 0)
	{
		if (check_set(set, s1[len - 1]) == 1)
			len--;
		else
			break ;
	}
	new_ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_ptr)
		return (NULL);
	i = 0;
	while (len--)
	{
		new_ptr[i] = s1[i];
		i++;
	}
	new_ptr[i] = '\0';
	return (new_ptr);
}
/*
int	main(void)
{
	char	*ptr;
	char	*set;
	char	*new_ptr;

	ptr = "abababaaabbbHello Worldaaabbbaabab";
	set = "ab";
	new_ptr = ft_strtrim(ptr, set);
	printf("%s", new_ptr);
	return (0);
}
*/