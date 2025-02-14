#include <stdio.h>
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		lst = lst -> next;
		count++;
	}
	return (count);
}

/*
int main()
{
	int	a1 = 25;
	char a2 = 'a';
	char str[] = "hello";
	t_list	*head = (t_list *)malloc(sizeof(t_list));
	if(!head)
		return (1);
	head -> content = &a1;

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

	int size = ft_lstsize(head);
	printf("%d\n", size);

	free(head);
	free(node2);
	free(node3);

	return 0;
}
*/