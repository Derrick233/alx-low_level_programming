#include <stdio.h>

/**
 * main - printing alphabet in lowercases
 *
 * Return: 0 always
 *
 */
int main(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
		putchar(character);

	putchar('\n');

	return (0);
}
