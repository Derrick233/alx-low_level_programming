#include <stdio.h>

/**
 * main - main functio
 *
 *Return: 0 always
 *
 */
int main(void)
{
	int c;

	for (c = 0 ; c < 10 ; c++)
		putchar(c + '0');
	putchar('\n');
	return (0);

}
