#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h> //For debugging(shall be removed)

typedef struct node
{
	int			value;
	struct node	*link;
}	t_node;

t_node	*findlast(t_node **p2h);
void	push(int x, t_node **p2h);
void	push_a(t_node **p2h_a, t_node **p2h_b);
void	push_b(t_node **p2h_b, t_node **p2h_a);
void	swap_a(t_node **p2h_a);
void	swap_b(t_node **p2h_b);
void	swap_ab(t_node **p2h_a, t_node **p2h_b);
void	rotate_a(t_node **p2h_a);
void	rotate_b(t_node **p2h_b);
void	rotate_ab(t_node **p2h_b, t_node **p2h_a);
void	reverse_rotate_a(t_node **p2h_a);
void	reverse_rotate_b(t_node **p2h_b);
void	reverse_rotate_ab(t_node **p2h_b, t_node **p2h_a);

#endif
