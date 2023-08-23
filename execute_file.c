#define _POSIX_C_SOURCE 200809L

#include "monty.h"

/**
 * execute_file - processes the monty file
 *
 * @filename: name of the file to be used
 *
 * Return: (no return)
 *
 */
void execute_file(const char *filename)
{
instruction_t instructions[] = {
				{"push", push},
				{"pop", pop},
				{"pall", pall},
				{"pint", pint},
				{"swap", swap},
				{"add", add},
				{"nop", nop},
				{"sub", sub},
				{"div", _div},
				{"mul", mul},
				{"mod", mod},
				{NULL, NULL}
};
  
  
	FILE *file;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	unsigned int line_number = 0;
	stack_t *stack = NULL;
	char *opcode;
	int i;

	file = fopen(filename, "r");

	if (!file)
	{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	exit(EXIT_FAILURE);
	}

	while ((read = getline(&line, &len, file)) != -1)
	{
	line_number++;
	opcode = strtok(line, " \t\n");

	if (opcode == NULL)
	continue;

	i = 0;
	while (instructions[i].opcode != NULL)
	{
	if (strcmp(opcode, instructions[i].opcode) == 0)
		{
		instructions[i].f(&stack, line_number);
		break;
		}
	i++;
	}
	if (instructions[i].opcode == NULL)
		{
		fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
		exit(EXIT_FAILURE);
		}
	}
	if (line)
	free(line);
	fclose(file);
}
