#include "main.h"

/**
 * rot13 - Encodes a string using ROT13
 * @str: The input string
 *
 * Return: Pointer to the modified string.
 */
char *rot13(char *str)
{
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; letters[j]; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = rot13[j];
				break;
			}
		}
	}

	return (str);
}

