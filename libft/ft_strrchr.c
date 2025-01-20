#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;
	size_t		index;

	last = NULL;
	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] == (char)c)
			last = &s[index];
		index++;
	}
	if (c == '\0')
		return ((char *)&s[index]);
	return ((char *)last);
}
