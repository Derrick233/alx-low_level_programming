#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints the elements of an integer array.
 *
 * This function takes an integer array and its size as input and prints all
 * the elements of the array to the standard output. The elements are printed
 * in the order they appear in the array, separated by commas and a space.
 * The function does not add a new line character at the end of the output.
 *
 * @a: Pointer to the integer array to be printed.
 * @n: The number of elements in the array.
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
