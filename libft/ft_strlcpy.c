/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:34:20 by aboutami          #+#    #+#             */
/*   Updated: 2024/10/28 17:02:53 by aboutami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	len;

	index = 0;
	len = ft_strlen(src);
	if (size > 0)
	{
		while (src[index] != '\0' && index < size - 1)
		{
			dst[index] = src[index];
			index++;
		}
		dst[index] = '\0';
	}
	return (len);
}
