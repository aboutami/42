#include "../inc/push_swap.h"

t_node	*is_valid(int argc, char *argv[])
{
	t_node	*stack_temp;
	t_node	*stack_a;
	t_node	*current;
	int	i;
	int	j;
	int	value;
	int	error;

	stack_temp = NULL;
	stack_a = NULL;
	i = 1;
	j = 0;
	if(argc < 3)
	{
		return (NULL);
	}
	
	while(i < argc)
	{
		j = 0;
		if(argv[i][j] == '\0')
			return NULL;
		while(argv[i][j]!= '\0')
		{
			if (!(ft_isdigit(argv[i][j]) ||(j == 0 && argv[i][j] == '-')))
				return NULL;
			j++;
		}
		error = 0;
		value = ft_atoi(argv[i], &error);
		if(error)
			return NULL;
		push(value, &stack_temp);
		if(finddup(&stack_temp))
			return (NULL);
		i++;
	}
	current = stack_temp;
	while(current)
	{
		push(current->value, &stack_a);
		current = current->link;
	}
	//freestack(stack_temp);
	return (stack_a);
}
