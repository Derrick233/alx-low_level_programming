#include "main.h"

/**
 * _isalpha - a function that checkes alphabetic character
 * @c: c is to check parameter
 * Return: 0 or 1 after excution
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
