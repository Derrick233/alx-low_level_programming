#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals
 * of a square matrix.
 * @a: Pointer to the square matrix (1D array).
 * @size: The size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
	int index, sumA = 0, sumB = 0;

	for (index = 0; index < size; index++)
	{
		sumA += a[index];
		a += size;
	}

	a -= size;

	for (index = 0; index < size; index++)
	{
		sumB += a[index];
		a -= size;
	}

	printf("%d, %d\n", sumA, sumB);
}
