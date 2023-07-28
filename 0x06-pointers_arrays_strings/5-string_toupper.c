#include "main.h"
#include <ctype.h>

/**
 * string_toupper - Converts all lowercase characters in a string to uppercase
 * @str: The input string
 *
 * Return: Pointer to the modified string.
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
	}

	return (str);
}
