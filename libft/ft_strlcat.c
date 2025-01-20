/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:57:57 by aboutami          #+#    #+#             */
/*   Updated: 2024/10/29 15:05:01 by aboutami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_index;
	size_t	s_index;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	d_index = dst_len;
	s_index = 0;
	if (size <= dst_len)
		return (size + src_len);
	while (src[s_index] && (dst_len + s_index) < size - 1)
	{
		dst[d_index] = src[s_index];
		d_index++;
		s_index++;
	}
	dst[d_index] = '\0';
	return (dst_len + src_len);
}
