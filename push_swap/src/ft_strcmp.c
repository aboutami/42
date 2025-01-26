#include "../inc/push_swap.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	index;

	index = 0;
	while (s1[index] && s1[index] == s2[index])
		index++;

	return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}
