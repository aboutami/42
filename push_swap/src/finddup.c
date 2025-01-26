#include "../inc/push_swap.h"

//This is a temporary solution, later hash set will be used for optimizaiton

int	finddup(t_node **p2h)
{
	t_node	*set;
	t_node	*stack;
	
	if (p2h == NULL || *p2h == NULL)
	{
		return 0;
	}
	stack = *p2h;
	while (stack)
	{
		set = *p2h;
		while(set)
		{
			if(stack != set && stack->value == set->value)
				return 1;
			set = set->link;
		}
		stack = stack->link;
	}
	return 0;
}
