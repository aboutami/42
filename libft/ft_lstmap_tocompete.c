#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list *current;
	t_list	*head;
	
	if(!lst || !f || !del)
		return (NULL);

	current = lst;
	head = NULL;
	while(current)
	{
		head = ft_lstnew(f(current->content));
		current = current->next	
	}

}
