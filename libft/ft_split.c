/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 02:34:35 by aboutami          #+#    #+#             */
/*   Updated: 2024/10/21 04:34:21 by aboutami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	strings_counter(char const *s, const char c)
{
	int	index;
	int	counter;

	index = 0;
	counter = 0;
	while (s[index] != '\0')
	{
		while (s[index] != '\0' && s[index] == c)
			index++;
		if (s[index] != '\0' && s[index] != c)
			counter++;
		while (s[index] != '\0' && s[index] != c)
			index++;
	}
	return (counter);
}

static char	*fill(char const *s, const char c, int string_start)
{
	int		j;
	int		index;
	int		len;
	char	*temp;

	j = 0;
	len = 0;
	index = string_start;
	while (s[index] != '\0' && s[index] != c)
	{
		len++;
		index++;
	}
	temp = malloc(sizeof(char) * (len +1));
	if (temp == NULL)
		return (NULL);
	index = string_start;
	while (j < len)
	{
		temp[j] = s[index];
		j++;
		index++;
	}
	temp[j] = '\0';
	return (temp);
}

static void	free_allocations(char **s, int current_string)
{
	while (current_string >= 0)
	{
		free(s[current_string]);
		current_string--;
	}
	free(s);
}

char	**ft_split(char const *s, const char c)
{
	char	**array_of_strings;
	int		current_string;
	int		start;
	int		number_of_strings;

	current_string = 0;
	start = 0;
	number_of_strings = strings_counter(s, c);
	array_of_strings = malloc(sizeof(char *) * (number_of_strings + 1));
	if (array_of_strings == NULL)
		return (NULL);
	while (current_string < number_of_strings)
	{
		while (s[start] == c)
			start++;
		array_of_strings[current_string] = fill(s, c, start);
		if (array_of_strings[current_string] == NULL)
			return (free_allocations(array_of_strings, current_string), NULL);
		start = start + ft_strlen(array_of_strings[current_string]);
		current_string++;
	}
	array_of_strings[current_string] = NULL;
	return (array_of_strings);
}
