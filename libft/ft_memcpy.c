#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				index;
	unsigned char		*pointer_2d;
	const unsigned char	*pointer_2s;

	index = 0;
	pointer_2d = (unsigned char *)dest;
	pointer_2s = (const unsigned char *)src;
	if (n == 0 || pointer_2s == pointer_2d)
		return (dest);
	while (index < n)
	{
		pointer_2d[index] = pointer_2s[index];
		index++;
	}
	return (dest);
}
