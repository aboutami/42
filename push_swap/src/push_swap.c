#include "../inc/push_swap.h"

void	push(int x, node **p2h)
{
	node	*new_node;
	new_node = malloc(sizeof(node));
	if(!new_node)
		return;
	new_node->value = x;
	new_node->link = *p2h;
	*p2h = new_node;
}

node	*findlast(node	**p2h)
{
	node	*last;
	last  = *p2h;
	while(last->link != NULL)
	{
		last = last->link;
	}
	return(last);
}
void	push_B(node	**p2h_b,node	**p2h_a)
{
	node	*temp = *p2h_a;
	push((*p2h_a)->value,p2h_b);
	*p2h_a = (*p2h_a)->link;
	free(temp);
}


void    push_A(node     **p2h_b,node    **p2h_a)
{
        node    *temp = *p2h_b;
        push((*p2h_b)->value,p2h_a);
        *p2h_b = (*p2h_b)->link;
        free(temp);
}


void	swap_A(node	**p2h_a)
{
	node	*node1;
	node	*node2;
	
	node1 = *p2h_a;
	node2 = (*p2h_a)->link;
	*p2h_a = node2;
	node1->link = node2->link;
	node2->link  = node1;
}

void    swap_B(node     **p2h_b)
{
        node    *node1;
        node    *node2;

        node1 = *p2h_b;
        node2 = (*p2h_b)->link;
        *p2h_b = node2;
        node1->link = node2->link;
        node2->link  = node1;
}

void	swap_AB(node **p2h_a, node	**p2h_b)
{
	swap_A(p2h_a);
	swap_B(p2h_b);
}

void	rotate_A(node	**p2h_a)
{
	node	*last;
	node	*node1;
	
	node1 = *p2h_a;
	*p2h_a = node1->link;
	last = findlast(p2h_a);
	last->link = node1;
	node1->link = NULL;

	
}

void    rotate_B(node   **p2h_b)
{
        node    *last;
        node    *node1;

        node1 = *p2h_b;
        *p2h_b = node1->link;
        last = findlast(p2h_b);
        last->link = node1;
        node1->link = NULL;


}

void	rotate_AB(node	**p2h_b,node	**p2h_a)
{
	rotate_A(p2h_a);
	rotate_B(p2h_b);
}

void	reverse_rotate_A(node **p2h_a)
{
	node	*last;
	node	*first;
	node	*before_last;

	last = findlast(p2h_a);
	first = *p2h_a;
	before_last = first;
	while(before_last->link->link != NULL)
		before_last = before_last->link;
	last->link = first;
	*p2h_a = last;
	before_last->link = NULL;
}

void    reverse_rotate_B(node **p2h_b)
{
        node    *last;
        node    *first;
        node    *before_last;

        last = findlast(p2h_b);
        first = *p2h_b;
        before_last = first;
        while(before_last->link->link != NULL)
                before_last = before_last->link;
        last->link = first;
        *p2h_b = last;
        before_last->link = NULL;
}

void	reverse_rotate_AB(node	**p2h_b,node	**p2h_a)
{
	reverse_rotate_A(p2h_a);
	reverse_rotate_B(p2h_b);
}



void free_stack(node *stack)
{
	while (stack != NULL)
	{
		node *temp = stack;
		stack = stack->link;
		free(temp);
	}
}

void print_stack(node *p) {
    while (p != NULL) {
        printf("%d ", p->value);
        p = p->link;
    }
    printf("\n");
}
int main() {
    node *stack_a = NULL;
    node *stack_b = NULL;

    // Push some values to stack A
    push(6, &stack_a);
    push(5, &stack_a);
    push(4, &stack_a);
    push(3, &stack_a);
    push(2, &stack_a);
    push(1, &stack_a);

    printf("Initial Stack A: ");
    print_stack(stack_a);
    printf("Initial Stack B: ");
    print_stack(stack_b);

    // Perform push_B operation (move top of A to B)
    push_B(&stack_b, &stack_a);
    printf("\nAfter pushing from A to B (push_B):\n");
    printf("Stack A: ");
    print_stack(stack_a);
    printf("Stack B: ");
    print_stack(stack_b);

    // Perform push_A operation (move top of B to A)
    push_A(&stack_b, &stack_a);
    printf("\nAfter pushing from B to A (push_A):\n");
    printf("Stack A: ");
    print_stack(stack_a);
    printf("Stack B: ");
    print_stack(stack_b);

    // Perform swap_A operation
    swap_A(&stack_a);
    printf("\nAfter swapping top two elements of A (swap_A):\n");
    printf("Stack A: ");
    print_stack(stack_a);

   // Perform push_B operation (move top of A to B)
    push_B(&stack_b, &stack_a);
    printf("\nAfter pushing from A to B (push_B):\n");
    printf("Stack A: ");
    print_stack(stack_a);
    printf("Stack B: ");
    print_stack(stack_b);
     // Perform push_B operation (move top of A to B)
    push_B(&stack_b, &stack_a);
    printf("\nAfter pushing from A to B (push_B):\n");
    printf("Stack A: ");
    print_stack(stack_a);
    printf("Stack B: ");
    print_stack(stack_b);
   
   // Perform swap_B operation
    swap_B(&stack_b);
    printf("\nAfter swapping top two elements of B (swap_B):\n");
    printf("Stack B: ");
    print_stack(stack_b);

    // Perform swap_AB operation (swap both A and B)
    swap_AB(&stack_a, &stack_b);
    printf("\nAfter swapping both stacks (swap_AB):\n");
    printf("Stack A: ");
    print_stack(stack_a);
    printf("Stack B: ");
    print_stack(stack_b);

    // Perform rotate_A operation (rotate A)
    rotate_A(&stack_a);
    printf("\nAfter rotating A (rotate_A):\n");
    printf("Stack A: ");
    print_stack(stack_a);
    // Perform push_B operation (move top of A to B)
    push_B(&stack_b, &stack_a);
    printf("\nAfter pushing from A to B (push_B):\n");
    printf("Stack A: ");
    print_stack(stack_a);
    printf("Stack B: ");
    print_stack(stack_b);
    // Perform push_B operation (move top of A to B)
    push_B(&stack_b, &stack_a);
    printf("\nAfter pushing from A to B (push_B):\n");
    printf("Stack A: ");
    print_stack(stack_a);
    printf("Stack B: ");
    print_stack(stack_b);

    // Perform rotate_B operation (rotate B)
    rotate_B(&stack_b);
    printf("\nAfter rotating B (rotate_B):\n");
    printf("Stack B: ");
    print_stack(stack_b);

    // Perform rotate_AB operation (rotate both A and B)
    rotate_AB(&stack_b, &stack_a);
    printf("\nAfter rotating both stacks (rotate_AB):\n");
    printf("Stack A: ");
    print_stack(stack_a);
    printf("Stack B: ");
    print_stack(stack_b);

    // Perform reverse_rotate_A operation (reverse rotate A)
    reverse_rotate_A(&stack_a);
    printf("\nAfter reverse rotating A (reverse_rotate_A):\n");
    printf("Stack A: ");
    print_stack(stack_a);

    // Perform reverse_rotate_B operation (reverse rotate B)
    reverse_rotate_B(&stack_b);
    printf("\nAfter reverse rotating B (reverse_rotate_B):\n");
    printf("Stack B: ");
    print_stack(stack_b);

    // Perform reverse_rotate_AB operation (reverse rotate both A and B)
    reverse_rotate_AB(&stack_b, &stack_a);
    printf("\nAfter reverse rotating both stacks (reverse_rotate_AB):\n");
    printf("Stack A: ");
    print_stack(stack_a);
    printf("Stack B: ");
    print_stack(stack_b);

    // Clean up memory
    free_stack(stack_a);
    free_stack(stack_b);

    return 0;
}

