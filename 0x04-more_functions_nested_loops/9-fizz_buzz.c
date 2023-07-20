#include <stdio.h>

/**
 * fizz_buzz - Prints the numbers from 1 to 100, following Fizz-Buzz rules.
 *
 * For multiples of three, print "Fizz".
 * For multiples of five, print "Buzz".
 * For numbers which are multiples of both three and five, print "FizzBuzz".
 * Each number or word should be separated by a space.
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i < 100)
		{
			printf(" ");
		}
	}

	printf("\n");
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	fizz_buzz();
	return (0);
}

