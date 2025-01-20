#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	index;

	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] == (char)c)
		{
			return ((char *)&s[index]);
		}
		index++;
	}
	if (c == '\0')
		return ((char *)&s[index]);
	return (NULL);
}
