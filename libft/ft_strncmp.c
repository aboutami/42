/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:57:57 by aboutami          #+#    #+#             */
/*   Updated: 2024/10/29 14:13:25 by aboutami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	while (s1[index] && s1[index] == s2[index] && index < n - 1)
		index++;
	if (n == 0)
		return (0);
	return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}
