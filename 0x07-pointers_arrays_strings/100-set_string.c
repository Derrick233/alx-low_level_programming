#include "main.h"

/**
 * set_string - Sets the value of a pointer to a string.
 *
 * @s: Pointer to a pointer that will be set to 'to'.
 * @to: Pointer to the string to be assigned.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
