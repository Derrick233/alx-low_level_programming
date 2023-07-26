#include "main.h"

/**
 * _puts - Prints a string to the standard output.
 * @str: The input string.
 *
 * Return: void (no return value for void functions)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}
