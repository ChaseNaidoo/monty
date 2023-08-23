#include "monty.h"

/**
 * div - implements the div opcode
 *
 * @stack: a pointer to the stack to be used
 * @line_number: the current line number
 *
 * Return: (no return)
 *
 */
void _div(stack_t **stack, unsigned int line_number)
{
	int result;

	if (*stack == NULL || (*stack)->next == NULL)
	{
	fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
	exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
	fprintf(stderr, "L%u: division by zero\n", line_number);
	exit(EXIT_FAILURE);
	}
	result = (*stack)->next->n / (*stack)->n;
	pop(stack, line_number);
	(*stack)->n = result;
}
