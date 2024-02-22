#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <ctype.h>
# include <string.h>
# include <stdio.h>
# include <fcntl.h>
# include <sys/wait.h>
# include <errno.h>

typedef struct stack
{
	struct stack	*previous;
	int				position;
	int				content;
	int				index;
	int				direction;
	int				moves;
	struct stack	*next;
}				t_stack;

/* algorythm */

/* main alghorythm function */
int		sort_stack(t_stack **stack_a, t_stack **stack_b);

/* general moves */

/*  swaps the first two elements of the stack */
int		swap(t_stack **stack);
/*  takes the first element at the top of stack origin and puts it at the top of the other stack destiny*/
int		push(t_stack **destiny, t_stack **origin);
/*  shifts up all elements of the stack by 1. The first element becomes the last one */	
int		rotate(t_stack **stack);
/*  shifts down all elements of the stack by 1. The last element becomes the first one */
int		reverse_rotate(t_stack **stack);

/* avaliable moves */

/* execute swap on stack A */
int		sa(t_stack **stack_a);
/* execute swap on stack B */
int		sb(t_stack **stack_b);
/* execute swap on both stacks */
int		ss(t_stack **stack_a, t_stack **stack_b);
/* execute push from B to A */
int		pa(t_stack **stack_a, t_stack **stack_b);
/* execute push from A to B */
int		pb(t_stack **stack_a, t_stack **stack_b);
/* execute rotate on stack A */
int		ra(t_stack **stack_a);
/* execute rotate on stack B */
int		rb(t_stack **stack_b);
/* execute rotate on both stacks */
int		rr(t_stack **stack_a, t_stack **stack_b);
/* execute reverse rotate on stack A */
int		rra(t_stack **stack_a);
/* execute reverse rotate on stack B */
int		rrb(t_stack **stack_b);
/* execute reverse rotate on both stacks */
int		rrr(t_stack **stack_a, t_stack **stack_b);	

/* variables corretion */

/* calculate variables of stacks */
void	variables_corretor(t_stack **stack_a);
/* calculates number of moves for each element of the stacks */
int		calc_moves(t_stack **stack_a, t_stack **stack_b);
/* points the pointer to stack to the first element od itself */
void	get_first_element(t_stack **stack);
/* return the correct place in the other stack for a number of one stack */
t_stack	*find_correct_place(int number, t_stack *stack_b);
/* find number with smallest number of moves */
t_stack	*find_snbr(t_stack *stack_a);


/* suport functions */

/* atoi */
int		ft_atoii(char *str);
/* calculate stack size */
int		ft_lstsize(t_stack *lst);
/* add new element to the beginning of the stack */
void	ft_lstadd_front(t_stack **lst, t_stack *new);
/* add new element to the end of the stack */
void	ft_lstadd_back(t_stack **lst, t_stack *new);
/* create new element */
t_stack	*ft_lstnew(int content);
/* return the last element of the stack */
t_stack	*ft_lstlast(t_stack *lst);

/* free stack */
void	free_stack(t_stack **stack_);

/* prints stack with variables on table */	
void	print_stack(t_stack *stack_a, t_stack *stack_b);

#endif
