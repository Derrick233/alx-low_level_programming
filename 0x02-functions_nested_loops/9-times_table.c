#include "main.h"

/**
 * times_table - Prints the times table from 0 to 9
 *
 * Return: void
 */
void times_table(void)
{
	int digit, multiplication, product;

	for (digit = 0; digit <= 9; digit++)
	{
		_putchar('0');

		for (multiplication = 1; multiplication <= 9; multiplication++)
		{
			_putchar(',');
			_putchar(' ');

			product = digit * multiplication;

			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');

			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}

