/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:57:57 by aboutami          #+#    #+#             */
/*   Updated: 2024/10/29 15:27:06 by aboutami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	index;
	size_t	start;
	size_t	end;
	char	*processed_string;

	index = 0;
	start = 0;
	end = ft_strlen(s1);
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]) != 0)
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]) != 0)
		end--;
	processed_string = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!processed_string)
		return (NULL);
	while (start < end)
	{
		processed_string[index] = s1[start];
		index++;
		start++;
	}
	processed_string[index] = '\0';
	return (processed_string);
}
