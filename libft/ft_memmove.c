#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*pointer_2d;
	const unsigned char	*pointer_2s;
	size_t				index;

	pointer_2d = (unsigned char *)dest;
	pointer_2s = (const unsigned char *)src;
	index = 0;
	if (pointer_2s == pointer_2d || n == 0)
		return (dest);
	if (dest > src)
	{
		index = n;
		while (index > 0)
		{
			index--;
			pointer_2d[index] = pointer_2s[index];
		}
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
