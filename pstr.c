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

	if (value >= 1 && value <= 127)
	{
	putchar(value);
		if (value == 0)
		break;
	}
	else
		{
		break;
		}
	current = current->next;
	}
	putchar('\n');
}
