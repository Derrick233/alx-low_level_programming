#include "main.h"

/**
 * puts2 - Prints every other char in a string, starting 1st, new line.
 * @str: inputted parameter
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
