#include "../inc/push_swap.h"

int	ft_atoi(const char *s, int *error_flag)
{
	size_t	index;
	int	sign;
	long 	result;

	sign = 1;
	result = 0;
	index = 0;
	*error_flag = 0;
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
		if ((result * sign) > 2147483647 || (result * sign) < -2147483648)
                {
                        *error_flag = 1;
                        return 0;
                }
		index++;
	}
	return ((int)result * sign);
}
