#include "../inc/push_swap.h"

t_node	*findlast(t_node **p2h)
{
	t_node	*last;

	if (!p2h || !*p2h)
		return (NULL);
	last = *p2h;
	while (last->link != NULL)
	{
		last = last->link;
	}
	return (last);
}
