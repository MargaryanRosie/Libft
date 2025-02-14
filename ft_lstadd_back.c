#include <stdio.h>
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp -> next)
		tmp = tmp -> next;
	tmp -> next = new;
}


/*
int main()
{
	int	a1 = 25;
	char a2 = 'a';
	char str[] = "hello";
	char str1[] = "hel";

	t_list	*head = (t_list *)malloc(sizeof(t_list));
	if(!head)
		return (1);
	head -> content = &a1;
	head -> next = NULL;

	t_list	*node2 = (t_list *)malloc(sizeof(t_list));
	if(!node2)
		return (1);
	node2 -> content = &a2;
	head -> next = node2;

	t_list	*node3 = (t_list *)malloc(sizeof(t_list));
	if(!node3)
		return (1);
	node3 -> content = str;
	node2 -> next = node3;
	node3 -> next = NULL;

	t_list *node4 = (t_list *)malloc(sizeof(t_list));
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

	return 0;
}
*/
