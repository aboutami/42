/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:57:56 by aboutami          #+#    #+#             */
/*   Updated: 2024/10/29 13:16:02 by aboutami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*pointer_2s;
	size_t			index;

	index = 0;
	pointer_2s = (unsigned char *)s;
	while (index < n)
	{
		pointer_2s[index] = (unsigned char)c;
		index++;
	}
	return (s);
}
