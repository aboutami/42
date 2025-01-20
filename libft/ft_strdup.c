#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dest;

	len = ft_strlen(s) + 1;
	dest = (char *)malloc(len * sizeof(char));
	if (dest == NULL)
		return (NULL);
	ft_memcpy(dest, s, len);
	return (dest);
}
