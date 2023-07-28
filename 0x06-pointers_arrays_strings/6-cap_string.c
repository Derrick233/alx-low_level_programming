#include <ctype.h>

/**
 * cap_string - Capitalizes the first letter of each word in a string
 * @str: The input string
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i;
	int is_word = 1;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (isspace(str[i]))
		{
			is_word = 1;
		}
		else
		{
			if (is_word && !isupper(str[i]))
			{
				str[i] = toupper(str[i]);
			}
			is_word = 0;
		}
	}

	return (str);
}

