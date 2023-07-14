#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 when correct
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char));
	printf("Size of a char: %lu byte(s)", sizeof(int));
	printf("Size of a char: %lu byte(s)", sizeof(long int));
	printf("Size of a char: %lu byte(s)", sizeof(long long int));
	printf("Size of a char: %lu byte(s)", sizeof(float));
	return (0);
}
