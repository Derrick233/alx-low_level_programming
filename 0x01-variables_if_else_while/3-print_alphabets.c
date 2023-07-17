#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0 always
 *
 */
int main(void)
{
	char character;

	for (character = 'a' ;  character <= 'z' ; character++)
		putchar(character);
	for (character = 'A' ; character <= 'Z' ; character++)
		putchar(character);
	putchar('\n');
	return (0);
}
