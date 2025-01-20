#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*processed_string;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL && s2 != NULL)
		return (ft_strdup(s2));
	if (s2 == NULL && s1 != NULL )
		return (ft_strdup(s1));
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	processed_string = malloc((s1_len + s2_len) + 1);
	if (processed_string == NULL)
		return (NULL);
	ft_memcpy(processed_string, s1, s1_len);
	ft_memcpy(processed_string + s1_len, s2, s2_len);
	processed_string[s1_len + s2_len] = '\0';
	return (processed_string);
}
