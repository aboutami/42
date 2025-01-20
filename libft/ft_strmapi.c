/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:04:46 by aboutami          #+#    #+#             */
/*   Updated: 2024/10/28 14:13:45 by aboutami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		index;
	char	*processed_string;

	index = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	processed_string = malloc(ft_strlen(s) + 1);
	if (processed_string == NULL)
		return (NULL);
	while (s[index] != '\0')
	{
		processed_string[index] = f(index, s[index]);
		index++;
	}
	processed_string[index] = '\0';
	return (processed_string);
}
