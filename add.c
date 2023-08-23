#include "monty.h"

/**
 * add - adds the top two elements of the stack
 *
 * @stack: a pointer to the stack to be used
 * @line_number: the current line number
 *
 * Return: (no return)
 *
 */
void add(stack_t **stack, unsigned int line_number)
{
	int sum;

	if (*stack == NULL || (*stack)->next == NULL)
	{
	fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
	exit(EXIT_FAILURE);
	}

	sum = (*stack)->n + (*stack)->next->n;

	pop(stack, line_number);
	(*stack)->n = sum;
}
