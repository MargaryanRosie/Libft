/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romargar <romargar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 13:30:36 by romargar          #+#    #+#             */
/*   Updated: 2025/02/15 14:10:38 by romargar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}

/*
int	main(void)
{
	int		a1;
	char	a2;
	char	str[] = "hello";
	char	str1[] = "hel";
	t_list	*head;
	t_list	*node2;
	t_list	*node3;
	t_list	*node4;

	a1 = 25;
	a2 = 'a';
	head = (t_list *)malloc(sizeof(t_list));
	if(!head)
		return (1);
	head -> content = &a1;
	head -> next = NULL;
	node2 = (t_list *)malloc(sizeof(t_list));
	if(!node2)
		return (1);
	node2 -> content = &a2;
	head -> next = node2;
	node3 = (t_list *)malloc(sizeof(t_list));
	if(!node3)
		return (1);
	node3 -> content = str;
	node2 -> next = node3;
	node3 -> next = NULL;
	node4 = (t_list *)malloc(sizeof(t_list));
	if(!node4)
		return (1);
	node4 -> content = str1;
	node4 -> next = NULL;
	ft_lstadd_back(&head, node4);
	printf("node4: %p\n", node4);
	printf("After function call: %p\n", node3 -> next);
	free(node2);
	free(node3);
	free(node4);
	return (0);
}
*/