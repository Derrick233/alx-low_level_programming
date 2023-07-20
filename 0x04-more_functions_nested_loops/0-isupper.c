#include "main.h"

/**
 * _isupper - a function that checks uppercase letters
 * @c: determines character input
 *
 *  Return: 1 if c is uppercase afer successfull execution else return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
