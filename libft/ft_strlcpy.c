#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	len;

	index = 0;
	len = ft_strlen(src);
	if (size > 0)
	{
		while (src[index] != '\0' && index < size - 1)
		{
			dst[index] = src[index];
			index++;
		}
		dst[index] = '\0';
	}
	return (len);
}
