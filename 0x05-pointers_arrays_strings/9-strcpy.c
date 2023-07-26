#include "main.h"

/**
 * _strcpy - Copies a string, including the null byte, from the source buffer
 *           to the destination buffer.
 * The _strcpy function copies a string from the source buffer
 * to the destination buffer, including the null byte
 * for proper string termination.
 *
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source buffer.
 *
 * Return: Pointer to the destination buffer @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
