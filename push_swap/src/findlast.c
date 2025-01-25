#include "../inc/push_swap.h"

node	*findlast(node **p2h)
{
	node	*last;

	if (!p2h || !*p2h)
		return (NULL);
	last = *p2h;
	while (last->link != NULL)
	{
		last = last->link;
	}
	return (last);
}
