#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet
 *
 * Return: always 0 after execution
 *
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);

	_putchar('\n');
}

