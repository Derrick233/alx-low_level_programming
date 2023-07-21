#include "main.h"

/**
 * times_table - Prints the times table from 0 to 9
 *
 * Return: void
 */
void times_table(void)
{
	int x, y, product;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			product = x * y;

			if (y == 0)
			{
				_putchar((product / 100) + '0');
				_putchar(((product / 10) % 10) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');

				if (product < 100)
					_putchar(' ');
				if (product < 10)
					_putchar(' ');
			}

			_putchar((product % 10) + '0');

			if (y != 9)
				_putchar(' ');
		}
		_putchar('$');
		_putchar('\n');
	}
}
