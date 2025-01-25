#include "./inc/push_swap.h"

void	rotate_a(node **p2h_a)
{
	node	*last;
	node	*first;

	if (!p2h_a || !*p2h_a || !(*p2h_a)->link)
		return ;
	first = *p2h_a;
	*p2h_a = first->link;
	last = findlast(p2h_a);
	last->link = first;
	first->link = NULL;
}

void	rotate_b(node **p2h_b)
{
	node	*last;
	node	*first;

	if (!p2h_b || !*p2h_b || !(*p2h_b)->link)
		return ;
	first = *p2h_b;
	*p2h_b = first->link;
	last = findlast(p2h_b);
	last->link = first;
	first->link = NULL;
}

void	rotate_ab(node **p2h_b, node **p2h_a)
{
	rotate_a(p2h_a);
	rotate_b(p2h_b);
}
