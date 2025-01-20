#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*pointer_2s;
	size_t			index;

	index = 0;
	pointer_2s = (unsigned char *)s;
	while (index < n)
	{
		pointer_2s[index] = (unsigned char)c;
		index++;
	}
	return (s);
}
