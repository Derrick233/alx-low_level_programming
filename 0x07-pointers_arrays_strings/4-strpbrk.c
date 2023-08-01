#include "main.h"

/**
 * _strpbrk - Locates the first occurrence of any character
 *from 'accept' in 's'.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the set of characters to match.
 *
 * Return: Pointer to the first occurrence of a
 * matching character in 's',or NULL if no match is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
