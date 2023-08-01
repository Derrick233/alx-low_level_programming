#include "main.h"

/**
 * _strspn - Obtain the length of the prifix substring
 * @s: The string to be searched
 * @accept: The prefix to be measured
 *
 * Return: The number of bytes in a s containing the
 * bytes form accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int position;

	while (*s)
	{
		for (position = 0; accept[position]; position++)
		{
			if (*s == accept[position])
			{
				bytes++;
				break;
			}
			else if (accept[position + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
