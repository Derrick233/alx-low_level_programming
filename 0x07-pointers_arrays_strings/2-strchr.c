#include "main.h"

/**
 * _strchr - This function searches for the first occurrance of character c
 * @s: This is a pointer to the string
 * @c: The character that needs to be located in the string 's'
 *
 * Return: A pointer to the first occurrence of the character c in s.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\n')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
