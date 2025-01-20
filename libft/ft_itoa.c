/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboutami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:18:30 by aboutami          #+#    #+#             */
/*   Updated: 2024/10/29 15:12:21 by aboutami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_counter(int n)
{
	int	value;
	int	counter;

	value = n;
	counter = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		value = value * (-1);
		counter++;
	}
	while (value > 0)
	{
		value = value / 10;
		counter++;
	}
	return (counter);
}

static char	*special_case(void)
{
	char	*min;

	min = malloc(12 * sizeof(char));
	if (min == NULL)
		return (NULL);
	ft_strlcpy(min, "-2147483648", 12);
	return (min);
}

char	*ft_itoa(int n)
{
	char	*digits;
	int		holder;
	int		number_of_digits;
	int		i_reversed;

	holder = n;
	number_of_digits = digit_counter(n);
	i_reversed = number_of_digits - 1;
	if (n == -2147483648)
		return (special_case());
	digits = malloc(sizeof(char) * (number_of_digits + 1));
	if (digits == NULL)
		return (NULL);
	digits [i_reversed + 1] = '\0';
	if (n < 0)
		holder = -holder;
	while (i_reversed >= 0)
	{
		digits[i_reversed] = (holder % 10) + '0';
		holder = holder / 10;
		i_reversed--;
	}
	if (n < 0)
		digits[0] = '-';
	return (digits);
}
