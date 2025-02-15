/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romargar <romargar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:17:54 by romargar          #+#    #+#             */
/*   Updated: 2025/02/15 16:53:22 by romargar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	ft_word_count(const char *s, char c)
{
	int	count;
	int	flag;

	count = 0;
	flag = 0;
	while (*s)
	{
		if (*s != c && flag == 0)
		{
			count++;
			flag = 1;
		}
		else if (*s == c)
		{
			flag = 0;
		}
		s++;
	}
	return (count);
}

static char	*ft_fill_word(const char **s, char c)
{
	int			len;
	const char	*start = *s;
	char		*word;
	int			i;

	len = 0;
	while (**s && **s != c)
	{
		len++;
		(*s)++;
	}
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

static void	ft_free_split(char **ptr, int i)
{
	while (i >= 0)
	{
		free(ptr[i]);
		i--;
	}
	free(ptr);
}

static char	**ft_allocate_words(const char *s, char c, int word_count)
{
	char	**ptr;
	int		i;

	ptr = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s && *s != c)
		{
			ptr[i] = ft_fill_word(&s, c);
			if (!ptr[i])
			{
				ft_free_split(ptr, i - 1);
				return (NULL);
			}
			i++;
		}
	}
	ptr[i] = NULL;
	return (ptr);
}

char	**ft_split(const char *s, char c)
{
	int	word_count;

	if (!s)
		return (NULL);
	word_count = ft_word_count(s, c);
	return (ft_allocate_words(s, c, word_count));
}
