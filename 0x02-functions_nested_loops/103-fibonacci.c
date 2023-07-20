#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the sum of even-valued terms in the Fibonacci sequence
 *              whose values do not exceed 4,000,000.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int fib1 = 1, fib2 = 2, next;
	long int sum = 0;

	while (fib1 <= 4000000)
	{
		if (fib1 % 2 == 0)
			sum += fib1;

		next = fib1 + fib2;
		fib1 = fib2;
		fib2 = next;
	}

	printf("%ld\n", sum);

	return (0);
}

