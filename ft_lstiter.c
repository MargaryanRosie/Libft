/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romargar <romargar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 13:57:51 by romargar          #+#    #+#             */
/*   Updated: 2025/02/15 15:39:47 by romargar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
void	print_content(void *content) {
	printf("Node content: %d\n", content);
}
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = (lst)->next;
	}
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
	ft_lstiter(head, &print_content);
	free(node2);
	free(node3);
	return (0);
}
*/