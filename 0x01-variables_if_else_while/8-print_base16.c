#include <stdio.h>

/**
 * main - print base 16
 *
 * Return: 0 always
 *
 */
int main(void)
{
	int i;
	char b;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (b = 'a' ; b <= 'f' ; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
