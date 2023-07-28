#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The input string
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *str)
{
	char replacements[] = "43371";
	char letters[] = "AEOTLaeotl";
	int i, j;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; letters[j]; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = replacements[j];
				break;
			}
		}
	}

	return (str);
}
