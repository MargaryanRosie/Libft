/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romargar <romargar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 13:30:57 by romargar          #+#    #+#             */
/*   Updated: 2025/02/15 13:30:59 by romargar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}

/*
int	main(void)
{
	int		a1;
	char	a2;
	char	str[] = "hello";
	t_list	*head;
	t_list	*node2;
	t_list	*node3;
	t_list	*last_node;

	a1 = 25;
	a2 = 'a';
	head = (t_list *)malloc(sizeof(t_list));
	if(!head)
		return (1);
	head -> content = &a1;
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
	last_node = ft_lstlast(head);
	printf("%p\n", node3);
	printf("%p\n", last_node);
	free(head);
	free(node2);
	free(node3);
	return (0);
}
*/