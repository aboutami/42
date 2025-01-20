#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*allocated_memory;
	size_t	max_size;

	max_size = 18446744073709551615U;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if ((max_size / nmemb) < size)
		return (NULL);
	allocated_memory = malloc(nmemb * size);
	if (allocated_memory == NULL)
		return (NULL);
	ft_memset(allocated_memory, 0, (nmemb * size));
	return (allocated_memory);
}
