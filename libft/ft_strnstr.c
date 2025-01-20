/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:57:57 by aboutami          #+#    #+#             */
/*   Updated: 2024/10/29 15:20:15 by aboutami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b_i;
	size_t	l_i;
	size_t	l_length;

	b_i = 0;
	l_i = 0;
	l_length = ft_strlen(little);
	if (l_length == 0)
		return ((char *)big);
	while (b_i < len && big[b_i] != '\0')
	{
		if (b_i + l_length <= len && big[b_i] == little[0])
		{
			while (l_i < l_length && big[b_i + l_i] == little[l_i])
				l_i++;
			if (l_i == l_length)
				return ((char *)&big[b_i]);
		}
		b_i++;
	}
	return (NULL);
}
