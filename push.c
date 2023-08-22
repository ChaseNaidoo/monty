#include "monty.h"

/**
 * push - implements the push opcode
 *
 * @stack: the stack being used
 * @line_number: the line number to be read
 *
 * Return: (no return)
 *
 */
void push(stack_t **stack, unsigned int line_number)
{
	char *arg = strtok(NULL, " \t\n");
	int value;
	stack_t *new_node;

	if (!arg || !is_num(arg))
	{
	fprintf(stderr, "L%u: usage: push integer\n", line_number);
	exit(EXIT_FAILURE);
	}
	value = atoi(arg);
	new_node = malloc(sizeof(stack_t));

	if (!new_node)
	{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
	}
	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack)
	(*stack)->prev = new_node;
	*stack = new_node;
}
