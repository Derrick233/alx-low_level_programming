#include <stdio.h>
#include <string.h>

/**
 * _strcmp - Compare two strings alphabetically
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 *
 * Return:
 *   0 if the strings are identical,
 *   a negative integer if the first string is less than the second,
 *   a positive integer if the first string is greater than the second.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && (*s1 == *s2))
	{
	s1++;
	s2++;
	}

	return (*s1 - *s2);
}
