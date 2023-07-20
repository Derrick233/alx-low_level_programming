#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers separated by a comma.
 *
 * Description: Generates Fibonacci sequence using the first two terms 1 and 2.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int fib1 = 1, fib2 = 2, next;
	int count;

	printf("%lu, %lu", fib1, fib2);

	for (count = 2; count < 98; count++)
	{
		next = fib1 + fib2;
		printf(", %lu", next);

		fib1 = fib2;
		fib2 = next;
	}

	printf("\n");

	return (0);
}

