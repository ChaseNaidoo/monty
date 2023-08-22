#include "monty.h"

/**
 * pall - implements the pall opcode
 *
 * @tsack: the stack to be used
 *
 * Return: (no return)
 *
 */
void pall(stack_t **stack)
{
	stack_t *current = *stack;

	while (current)
	{
        printf("%d\n", current->n);
	current = current->next;
	}
}
