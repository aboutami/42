#include "libft.h"

int ft_lstsize(t_list *lst)
{
	t_list *current;
	int	total;
	
	if(!lst)
		return (0);
	current	= lst;
	total = 0;
	while(current)
	{
		total++;
		current = current->next;
	}
	return (total);
}
