#include "main.h"

/**
 * print_chessboard - Prints chess board
 * @a: Chess board
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;
	int rows = (int) (sizeof(a));
	int cols = (int) (sizeof(a[0]) / sizeof(a[0][0]));

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			_putchar(a[i][j]);
			if (j == cols - 1)
				_putchar('\n');
		}
	}
}
