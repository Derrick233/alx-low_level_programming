#include "main.h"

/**
 * print_rev - Print a string in reverse, followed by a new line.
 * @s: The input string.
 */
void print_rev(char *s)
{
	if (*s == '\0')

		return;

	print_rev(s + 1);
	_putchar(*s);
}
