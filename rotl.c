#include "monty.h"

/**
 * rotl - implements the rotl opcode
 *
 * @stack: a pointer to the stack to be used
 * @line_number: the current line number
 *
 * Return: (no return)
 *
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *first = *stack;
	stack_t *second = NULL;

	(void)line_number;

	if (first == NULL || first->next == NULL)
	return;

	second = first->next;

	while (first->next != NULL)

	first = first->next;
	first->next = *stack;
	*stack = second;
	(*stack)->prev = NULL;
	first->next->prev = first;
}
