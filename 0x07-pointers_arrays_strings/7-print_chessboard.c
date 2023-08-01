#include "main.h"

/**
 * print_chessboard - Prints the chessboard represented by a 2D array.
 *
 * @a: Pointer to a 2D array representing the chessboard.
 *
 * Description: The function prints the chessboard layout using the
 * 2D array 'a',assuming it is an 8x8
 * grid representing the chessboard.
 */
void print_chessboard(char (*a)[8])
{
	int index1, index2;

	for (index1 = 0; index1 < 8; index1++)
	{
		for (index2 = 0; index2 < 8; index2++)
		{
			_putchar(a[index1][index2]);
		}
			_putchar('\n');
	}
}
