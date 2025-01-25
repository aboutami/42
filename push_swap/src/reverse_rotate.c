#include "../inc/push_swap.h"

void	reverse_rotate_a(node **p2h_a)
{
	node	*last;
	node	*first;
	node	*before_last;

	if (!p2h_a || !*p2h_a || !(*p2h_a)->link)
		return ;
	first = *p2h_a;
	last = findlast(p2h_a);
	before_last = first;
	while (before_last->link->link != NULL)
		before_last = before_last->link;
	last->link = first;
	*p2h_a = last;
	before_last->link = NULL;
}

void	reverse_rotate_b(node **p2h_b)
{
	node	*last;
	node	*first;
	node	*before_last;

	if (!p2h_b || !*p2h_b || !(*p2h_b)->link)
		return ;
	first = *p2h_b;
	last = findlast(p2h_b);
	before_last = first;
	while (before_last->link->link != NULL)
		before_last = before_last->link;
	last->link = first;
	*p2h_b = last;
	before_last->link = NULL;
}

void	reverse_rotate_ab(node **p2h_b, node **p2h_a)
{
	reverse_rotate_a(p2h_a);
	reverse_rotate_b(p2h_b);
}
