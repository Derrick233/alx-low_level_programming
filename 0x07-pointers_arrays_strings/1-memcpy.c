#include "main.h"

/**
 * _memcpy - Copy 'n' bytes from source to destination
 *
 * @dest: Pointer to the destination memory buffer
 * @src: Pointer to the source memory buffer
 * @n: The number of bytes to copy from the source to the destination
 *
 * Return:
 * This function returns a pointer to the destination memory buffer ('dest').
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int num;

	for (num = 0; num < n; num++)
		dest[num] = src[num];
	return (dest);
}
