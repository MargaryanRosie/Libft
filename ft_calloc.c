#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb && size && nmemb > (INT_MAX/size))
		return (NULL);
	ptr = (void*)malloc(size * nmemb);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}