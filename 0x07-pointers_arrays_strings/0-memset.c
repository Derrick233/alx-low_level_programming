#include "main.h"
/**
 * _memset - This function fills memory with a constant byte
 * @s: Pointer to the destination memory buffer
 * @b: The constant byte to be copied
 * @n: The number of bytes to fill in the destination buffer
 *
 * Return: pointer to the destination memory buffer ('s').
 */
 char *_memset(char *s, char b, unsigned int n)
{
	unsigned int num;

	for (num = 0; num < n; num++)
		s[num] = b;
	return (s);
}
