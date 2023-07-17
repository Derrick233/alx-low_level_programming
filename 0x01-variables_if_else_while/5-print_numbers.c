#include <stdio.h>

/**
 * main - numbers in base 10
 *
 * Return: 0 always
 *
 */
int main(void)
{
	int character;

	for (character = 0 ; character < 10 ; character++)
		printf("%d", character);
	printf("\n");
	return (0);
}
