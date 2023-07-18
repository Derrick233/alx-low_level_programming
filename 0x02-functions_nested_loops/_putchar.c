#include "main.h"
#include <unistd.h>

/**
 * Putchar prints a char to the std output
 *
 */

int _putchar(char c) {
	 write(1, &c, 1);
	 return c;
}
