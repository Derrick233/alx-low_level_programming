#include "main.h"
/**
 * print_last_digit - This funtion prints last digit of a given number
 * @d: indicates the digit given
 *
 * Return: last digit of a given number
 */
int print_last_digit(int d)
{
	int last_digit = d % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar (last_digit + '0');

	return (last_digit);
}
