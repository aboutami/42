#include "../inc/push_swap.h"

void	swap_a(node **p2h_a)
{
	node	*node1;
	node	*node2;

	if (!p2h_a ||!*p2h_a || !(*p2h_a)->link)
		return ;
	node1 = *p2h_a;
	node2 = (*p2h_a)->link;
	*p2h_a = node2;
	node1->link = node2->link;
	node2->link = node1;
}

void	swap_b(node **p2h_b)
{
	node	*node1;
	node	*node2;

	if (!p2h_b ||!*p2h_b || !(*p2h_b)->link)
		return ;
	node1 = *p2h_b;
	node2 = (*p2h_b)->link;
	*p2h_b = node2;
	node1->link = node2->link;
	node2->link = node1;
}

void	swap_ab(node **p2h_a, node **p2h_b)
{
	swap_a(p2h_a);
	swap_b(p2h_b);
}
