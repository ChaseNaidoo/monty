#include "monty.h"

/**
 * pstr - implements the pstr opcode
 *
 * @stack: a pointer to the stack to be used
 * @line_number: the current line number
 *
 * Return: (no return)
 *
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	int value;

	(void)line_number;

	while (current != NULL)
	{
	value = current->n;

	if (value <= 0 || value > 127)
	break;

	printf("%c", value);
	current = current->next;
	}
	printf("\n");
}
