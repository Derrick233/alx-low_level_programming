#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 50;
	long int fib1 = 1, fib2 = 2, next;

	printf("%ld, %ld", fib1, fib2);

	for (int i = 2; i < n; i++)
	{
		next = fib1 + fib2;
		printf(", %ld", next);

		fib1 = fib2;
		fib2 = next;
	}

	printf("\n");

	return (0);
}

