#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number to be printed
 *
 * Return: void
 */
void print_times_table(int n)
{
	int x, y, result;

	if (n >= 0 && n < 15)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar('0');
			for (y = 1; y <= n; y++)
			{
				_putchar(',');
				_putchar(' ');

				result = x * y;
				if (result <= 9)
				{
					_putchar(' ');
				}
				if (result <= 99)
				{
					_putchar(' ');
				}
				_putchar((result / 100) + '0');
				_putchar(((result / 10) % 10) + '0');
				_putchar((result % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

