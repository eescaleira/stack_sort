#include "push_swap.h"

int	sb(t_stack **stack_b)
{
	// print_stack(NULL, *stack_b);
	if (*stack_b)
		get_first_element(&(*stack_b));
	if (!*stack_b || ft_lstsize(*stack_b) <= 1)
		return (-1);
	swap(&(*stack_b));
	write(1, "sb\n", 3);
	return (0);
}

int	pb(t_stack **stack_a, t_stack **stack_b)
{
	// print_stack(*stack_a, *stack_b);
	if (!*stack_a)
		return (-1);
	get_first_element(&(*stack_a));
	if (*stack_b)
		get_first_element(&(*stack_b));
	push(&(*stack_b), &(*stack_a));
	write(1, "pb\n", 3);
	return (0);
}

int	rb(t_stack **stack_b)
{
	// print_stack(NULL, *stack_b);
	if (*stack_b)
		get_first_element(&(*stack_b));
	if (!*stack_b || ft_lstsize(*stack_b) < 2)
		return (-1);
	rotate(&(*stack_b));
	write(1, "rb\n", 3);
	return (0);
}

int	rrb(t_stack **stack_b)
{
	// print_stack(NULL, *stack_b);
	if (*stack_b)
		get_first_element(&(*stack_b));
	if (!*stack_b || ft_lstsize(*stack_b) < 2)
		return (-1);
	reverse_rotate(&(*stack_b));
	write(1, "rrb\n", 4);
	return (0);
}
