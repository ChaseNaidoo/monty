#include "monty.h"

/**
 * is_num - checks if string is a number)
 *
 * @str: the string to be checked
 *
 * Return: 0 (success), 1 (fail)
 *
 */
int is_num(const char *str)
{
	while (*str)
	{
	if (*str < '0' || *str > '9')
	return (0);
	str++;
	}
	return (1);
}
