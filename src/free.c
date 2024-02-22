#include "push_swap.h"

/* prints stack with variables on table */	
void	free_stack(t_stack **stack)
{
	t_stack	*tmp;

	while (*stack != NULL)
	{
		tmp = *stack;
		*stack = (*stack)->next;
		free(tmp);
	}
	free(*stack);
}
