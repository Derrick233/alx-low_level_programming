#include "main.h"

/**
 * _strstr - Locates the first occurrence of the substring
 * 'needle' in 'haystack'.
 *
 * @haystack: Pointer to the string to search in.
 * @needle: Pointer to the substring to find.
 *
 * Return: Pointer to the first occurrence of 'needle' in 'haystack',
 *         or NULL if 'needle' is not found in 'haystack'.
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		index = 0;
		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);
				index++;
			} while (haystack[index] == needle[index]);
		}
		haystack++;
	}
	return ('\0');
}
