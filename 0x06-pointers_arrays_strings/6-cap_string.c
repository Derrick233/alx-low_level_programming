#include <stdio.h>
#include <ctype.h>

/**
 * cap_string - Capitalizes the first letter of each word in a string
 *             and replaces spaces with tabs.
 *
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
		if (str[i] == ' ' || str[i] == '-' || str[i] == '.')
		{
			is_word = 1;
			str[i] = '\t'; /* Replace space with tab */
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

