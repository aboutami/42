/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:39:31 by aboutami          #+#    #+#             */
/*   Updated: 2024/10/25 12:58:16 by aboutami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int	index;
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	index = 0;
	while (s[index] && (s[index] == ' ' || (s[index] >= 9 && s[index] <= 13)))
	{
		index++;
	}
	if (s[index] == '-' || s[index] == '+')
	{
		if (s[index] == '-')
		{
			sign = sign * (-1);
		}
		index++;
	}
	while (s[index] != '\0' && s[index] >= '0' && s[index] <= '9')
	{
		result = result * 10 + (s[index] - '0');
		index++;
	}
	return (result * sign);
}
