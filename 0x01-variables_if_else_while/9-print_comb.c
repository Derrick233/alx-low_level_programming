#include <stdio.h>

/**
 * main - print all possible combinations
 *
 *Return: 0 always
 *
 */
int main(void)
{
	int x;

	for (x = 0 ; x < 10 ; x++)
	{
		if (x == 9)
			putchar(x + '0');
		else
		{
			putchar(x + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
