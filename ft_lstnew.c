#include <stdio.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node -> content = content;
	new_node -> next = NULL;
	return (new_node);
}

/*
int main()
{
	int a = 24;
	t_list	*node = ft_lstnew(&a);
	
	printf("%p\n", node -> content);
	printf("%d\n", *(int*)(node -> content));
	printf("%p\n", node -> next);

	return 0;
}
*/