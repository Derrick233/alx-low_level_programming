#include "main.h"

/**
 * _strlen - a function that calculates string length
 * @s: the parameter to be executed
 *
 * Return: return string length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
