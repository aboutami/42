/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:57:56 by aboutami          #+#    #+#             */
/*   Updated: 2024/10/29 12:50:27 by aboutami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				index;
	const unsigned char	*p_0;
	const unsigned char	*p_1;

	index = 0;
	p_0 = (const unsigned char *)s1;
	p_1 = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	while (index < n)
	{
		if (p_0[index] != p_1[index])
		{
			return (p_0[index] - p_1[index]);
		}
		index++;
	}
	return (0);
}
