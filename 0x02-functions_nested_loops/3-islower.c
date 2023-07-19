#include "main.h"

/**
 * _islower - this program checkes for lowercase
 * @c: checks parameter
 *
 * Return: 0 or 1 after execution
 */
int _islower(int c)
{
	if (c > 'a' && c <= 'z')

		return (1);
	else
		return (0);

}
