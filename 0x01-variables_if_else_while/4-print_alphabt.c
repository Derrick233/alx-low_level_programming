#include <stdio.h>

/**
 * main - print alphabets except q and e
 *
 * Return: 0 always
 */
int main(void)
{
	char character;

	for (character = 'a' ; character <= 'z' ; character++)
		if (character != 'q' && character != 'e')
			putchar(character);
	putchar('\n');
	return (0);

}
