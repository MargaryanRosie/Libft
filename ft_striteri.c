/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romargar <romargar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:37:32 by romargar          #+#    #+#             */
/*   Updated: 2025/02/15 16:37:35 by romargar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*
void	f_to_lower(unsigned int i, char *cptr)
{
	if (i % 2 == 0)
	{
		if (*cptr >= 'A' && *cptr <= 'Z')
			*cptr = *cptr + 32;
	}
}

int	main(void)
{
	char	s[] = "HELLO";

	ft_striteri(s, &f_to_lower);
	printf("%s\n", s);
	return (0);
}
*/
