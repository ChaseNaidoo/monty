#include "monty.h"

instruction_t instructions[] = {
	{"push", push},
	{"pop", pop},
	{NULL, NULL}
};

/**
 * main - handles the main logic of the monty interpreter
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: EXIT_SUCCESS (success), EXIT_FAILURE (fail)
 *
 */
int main(int argc, char *argv[])
{
	char *filename;

	if (argc != 2)
	{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
	}
	filename = argv[1];
	execute_file(filename);

	return (EXIT_SUCCESS); 
}
