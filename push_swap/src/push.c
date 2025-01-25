#include "../inc/push_swap.h"

void	push(int x, node **p2h)
{
	node	*new_node;

	if (!p2h)
		return ;
	new_node = malloc(sizeof(node));
	if (!new_node)
		return ;
	new_node->value = x;
	new_node->link = *p2h;
	*p2h = new_node;
}

void	push_b(node **p2h_b, node **p2h_a)
{
	node	*temp;

	if (!p2h_b || !p2h_a)
		return ;
	temp = *p2h_a;
	if (!temp)
		return ;
	push(temp->value, p2h_b);
	*p2h_a = temp->link;
	free(temp);
}

void	push_a(node **p2h_b, node **p2h_a)
{
	node	*temp;

	if (!p2h_b || !p2h_a)
		return ;
	temp = *p2h_b;
	if (!temp)
		return ;
	push(temp->value, p2h_a);
	*p2h_b = temp->link;
	free(temp);
}
