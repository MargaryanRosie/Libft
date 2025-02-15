static int	ft_get_size(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

static void	ft_fill_res(int size, int offset, int n, char *res)
{
	while (size > offset)
	{
		res[size - 1] = n % 10 + '0';
		n = n / 10;
		size--;
	}
}

char	*ft_itoa(int n)
{
	int		offset;
	int		size;
	char	*res;

	offset = 0;
	size = ft_get_size(n);
	res = (char *)malloc(sizeof(char) * size + 1);
	if (!res)
		return (0);
	if (n == -2147483648)
	{
		res[0] = '-';
		res[1] = '2';
		n = 147483648;
		offset = 2;
	}
	if (n < 0)
	{
		res[0] = '-';
		offset = 1;
		n = -n;
	}
	ft_fill_res(size, offset, n, res);
	res[size] = '\0';
	return (res);
}

/*int main()
{
	int	i = 125;
	int	j = -814;
	int	min = -2147483648;
	int	max = 2147483647;
	ft_putstr_fd(ft_itoa(i), 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd(ft_itoa(j), 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd(ft_itoa(min), 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd(ft_itoa(max), 1);
	ft_putchar_fd('\n', 1);
}*/













#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

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



#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}




#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*head;
	t_list	*tmp;

	if (lst == NULL || del == NULL)
	{
		return ;
	}
	head = *lst;
	while (head)
	{
		tmp = head -> next;
		(*del)(head -> content);
		free(head);
		head = tmp;
	}
	*lst = NULL;
}




#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL || del == NULL)
		return ;
	(*del)(lst -> content);
	free(lst);
}




#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		(*f)(lst -> content);
		lst = lst -> next;
	}
}



#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}



#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*tmp;

	head = NULL;
	while (lst)
	{
		tmp = ft_lstnew((*f)(lst -> content));
		if (!tmp)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, tmp);
		lst = lst -> next;
	}
	return (head);
}


#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (new == NULL)
	{
		return (0);
	}
	new -> content = content;
	new -> next = NULL;
	return (new);
}

/*int	main(void)
{
	char	*str;

	t_list	*elem;
	str = (char *)malloc(6*sizeof(char));
	str = "Hello";
	elem = ft_lstnew((void *)str);
	printf("%s\n", (char *)elem->content);
	free(new->content);
}*/



#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst-> next;
		++i;
	}
	return (i);
}


#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}



#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}



#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_putstr_fd("-2147483648", fd);
			return ;
		}
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n / 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd('0' + n, fd);
}


#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}






static void	ft_allocate(char **tab, char const *s, char sep)
{
	char		**tab1;
	char const	*tmp;

	tmp = s;
	tab1 = tab;
	while (*tmp)
	{
		while (*s == sep)
			++s;
		tmp = s;
		while (*tmp && *tmp != sep)
			++tmp;
		if (*tmp == sep || tmp > s)
		{
			*tab1 = ft_substr(s, 0, tmp - s);
			s = tmp;
			++tab1;
		}
	}
	*tab1 = NULL;
}

static int	ft_count_words(char const *s, char sep)
{
	int	word_count;

	word_count = 0;
	while (*s)
	{
		while (*s == sep)
			++s;
		if (*s)
			++word_count;
		while (*s && *s != sep)
			++s;
	}
	return (word_count);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	int		size;

	if (!s)
		return (NULL);
	size = ft_count_words(s, c);
	new = (char **)malloc(sizeof(char *) * (size + 1));
	if (!new)
		return (NULL);
	ft_allocate(new, s, c);
	return (new);
}

/*int	main()
{
	char	str[] = "Eu vou ser splitado!";
	char	c = ' ';
	char	**spt = ft_split(str, c);
	int	i = 0;
	while (spt[i] != 0)
	{
		ft_putstr_fd(spt[i], 1);
		i++;
	}
	ft_putchar_fd('\n', 1);
}*/







#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putchar_fd((nb % 10) + '0', fd);
	}
	else
		ft_putchar_fd(nb + '0', fd);
}



#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
