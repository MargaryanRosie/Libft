
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romargar <romargar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:17:54 by romargar          #+#    #+#             */
/*   Updated: 2025/02/05 16:57:51 by romargar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

static int ft_word_count(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**ptr;

    if (!s)
		return (NULL);
	size = ft_word_count(s);
    ptr = (char**)malloc(sizeof(char*) * (size + 1));
    if (!ptr)
        return (NULL);



}


static  int ft_word_count(char const *s, char c)
{
    int i;
    int flag;
    int count;

    i = 0;
    flag = 0;
    count = 0;
    while (*s)
    {
        if (*s == c)
            s++;
        else
        {
            count++;
            while (*s && *s != c)
                s++;
        }
    }
    return (count);
}

int main()
{

    char s[] = "hello world hello world    hello      hgjf jsgj jsfgj";
    int n = ft_word_count(s, ' ');

    printf ("%d\n", n);

}
