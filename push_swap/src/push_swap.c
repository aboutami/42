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

void free_stack(node *stack)
{
	while (stack != NULL)
	{
		node *temp = stack;
		stack = stack->next;
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
    free_stack(stack_a);
    free_stack(stack_b);
    return 0;
}
