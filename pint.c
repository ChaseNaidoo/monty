#include "monty.h"

/**
 * pint - prints the value at the top of the stack followed by a newline
 *
 * @stack: the stack being used
 * @line_number: the line number to be used
 *
 * Return: (no return)
 *
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (!*stack)
	{
	fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
	exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
