#include "main.h"

/**
 * _atoi - This function Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int dig = 0;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			dig = (dig * 10) + (*s - '0');

		else if (dig > 0)
			break;

	} while (*s++);

	return (dig * sign);
}
