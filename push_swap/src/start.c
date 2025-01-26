#include "../inc/push_swap.h"

void	start(t_node **p2h_a)
{
	t_node	*head;
	int	count;

	head = *p2h_a;
	count = 0;
	while(head)
	{
		head = head->link;
		count++;
	}
	head = *p2h_a;
	if(count == 2 && head->value > head->link->value)
	{
		swap_a(&head);
		printf("sa\n");
	}
	if(count == 3)
		lite_algorithm(&head);
	//else
	//	etherizer(&head);

}
