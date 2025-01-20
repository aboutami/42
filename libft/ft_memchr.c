#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			index;
	unsigned char	*p;

	index = 0;
	p = (unsigned char *)s;
	while (index < n)
	{
		if (p[index] == (unsigned char)c)
			return ((void *)&p[index]);
		index++;
	}
	return (NULL);
}
