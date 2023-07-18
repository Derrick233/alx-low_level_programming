#include "main.h"

/**
 * main - function that prints the alphabet in lowercase followed by a new line
 *
 * Return: 0 always
 */

void print_alphabet(void);
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
{
		_putchar(alphabets);
}
		_putchar('\n')
}
