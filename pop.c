#include "monty.h"

/**
 * pop - removes the top element from the stack.
 *
 * @stack: the stack to be used
 * @line_number: the line number to check
 *
 * Return: (no return)
 *
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *top;
  
	if (!*stack)
	{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
	exit(EXIT_FAILURE);
	}
	top = *stack;
	*stack = top->next;

	if (top->next)
	top->next->prev = NULL;
	free(top);
 }
