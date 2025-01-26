#include "../inc/push_swap.h"

void	lite_algorithm(t_node **p2h_a)
{
	t_node	*stack_a;

	//if there are values
	
	int	top;
	int	mid;
	int	bottom;
	stack_a = *p2h_a;
	top = stack_a->value;
	mid = stack_a->link->value;
	bottom = stack_a->link->link->value;
	if (mid > top && bottom > mid)
		return;
	else if(mid < top && bottom < mid)
	{
		swap_a(p2h_a);
		printf("sa\n");
		reverse_rotate_a(p2h_a);
		printf("rra\n");
	}	
	else if(mid < top && bottom > top)
	{
		swap_a(p2h_a);
		printf("sa\n");
	}
	else if(mid < top && bottom > mid && bottom < top)
	{
		rotate_a(p2h_a);
		printf("ra\n");
	}
	else if(mid > top && bottom < top)
	{
		reverse_rotate_a(p2h_a);
		printf("rra\n");
	}
	else if(mid > top && bottom < mid)
	{
		swap_a(p2h_a);
		printf("sa\n");
		rotate_a(p2h_a);
		printf("ra\n");
	}

		

}
