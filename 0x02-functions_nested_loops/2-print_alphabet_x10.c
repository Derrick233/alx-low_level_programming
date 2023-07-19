#include "main.h"

/**
 * print_alphabet_x10 - This program prints alphabets in lowercase 10 times
 *
 * Return: 0 always after execution
 *
 */
void print_alphabet_x10(void)
{
	char rows;
	char alphabet;

	for (rows = 0 ; rows < 10 ; rows++)
	{
		for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
			_putchar(alphabet);
		_putchar('\n');
	}
}

