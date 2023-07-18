#include "main.h"
#include <unistd.h>

/**
 * _putchar - Prints a character to the standard output.
 * @c: The character to be printed.
 *
 * This function takes a character and prints it to the standard output.
 * It is used as a replacement for the standard library function putchar.
 * The character passed as an argument is written to the standard output stream
 *
 * Return: The character that was printed.
 */

int _putchar(char c)
{
	write(1, &c, 1);
	return c;
}
