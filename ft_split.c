
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
#include <stdlib.h>
#include <stdio.h>

static int ft_word_count(const char *s, char c)
{
    int count = 0;
    int flag = 0;

    if (!s)
        return (0);
    while (*s)
    {
        if (*s != c && flag == 0)
        {
            count++;
            flag = 1;
        }
        else if (*s == c)
            flag = 0;
        s++;
    }
    return (count);
}

static char *ft_fill_word(const char **s, char c)
{
    int len = 0;
    char *word;
    const char *start = *s;

    while (**s && **s != c)
    {
        len++;
        (*s)++;
    }
    word = (char *)malloc(sizeof(char) * (len + 1));
    if (!word)
        return (NULL);
    for (int i = 0; i < len; i++)
        word[i] = start[i];
    word[len] = '\0';
    return (word);
}

static void ft_free_split(char **ptr, int i)
{
    while (i >= 0)
        free(ptr[i--]);
    free(ptr);
}

static char **ft_allocate_words(const char *s, char c, int word_count)
{
    char **ptr = (char **)malloc(sizeof(char *) * (word_count + 1));
    int i = 0;

    if (!ptr)
        return (NULL);
    while (*s)
    {
        if (*s != c)
        {
            ptr[i] = ft_fill_word(&s, c);
            if (!ptr[i])
            {
                ft_free_split(ptr, i - 1);
                return (NULL);
            }
            i++;
        }
        else
            s++;
    }
    ptr[i] = NULL;
    return (ptr);
}

char **ft_split(const char *s, char c)
{
    int word_count;

    if (!s)
        return (NULL);
    word_count = ft_word_count(s, c);
    return (ft_allocate_words(s, c, word_count));
}

/*

int main()
{
    char s[] = "    hello world hello world    hello      hgjf jsgj jsfgj      ";
    char **ptr = ft_split(s, ' ');

    if (!ptr)
    {
        printf("Memory allocation failed\n");
        return (1);
    }

    for (int i = 0; ptr[i]; i++)
        printf("%s\n", ptr[i]);

    for (int i = 0; ptr[i]; i++)  
        free(ptr[i]);
    free(ptr);

    return (0);
}
*/
