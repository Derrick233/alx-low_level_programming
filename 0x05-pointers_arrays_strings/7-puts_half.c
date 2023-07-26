#include "main.h"

/**
 * puts_half - Prints the second half of a null-terminated string.
 *
 * This function takes a pointer to a null-terminated string as input and print
 * the second half of the string. If the length of the string is odd, it prints
 * the second half, excluding the middle character.
 *
 * @str: Pointer to the null-terminated string to be processed.
 */
void puts_half(char *str)
{
	int i, x, count = 0;

	for (i = 0; str[i] != '\0'; i++)
		count++;
	x = ((count - 1) /  2);
	for (i = x + 1; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
