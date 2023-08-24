#include "monty.h"

/**
 * rotr - implements the rotr opcode
 *
 * @stack: a pointer to the stack to be used
 * @line_number: the current line number
 *
 * Return: (no return)
 *
 */
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *last = *stack;

	(void)line_number;

	if (last == NULL || last->next == NULL)
	return;

	while (last->next != NULL)

	last = last->next;
	last->prev->next = NULL;
	last->prev = NULL;
	last->next = *stack;
	(*stack)->prev = last;
	*stack = last;
}
