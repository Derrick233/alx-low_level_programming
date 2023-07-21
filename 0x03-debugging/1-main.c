#include <stdio.h>

/**
 * main - avoids an infinite loop
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{

		i++;
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}

