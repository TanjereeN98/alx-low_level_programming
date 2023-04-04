#include <main.h>

/**
 * print_chessboard - a function that prints the chessboard.
 * @a: array of 8 characters
 */

void print_chessboard(char (*a)[8])
{
	int i, y;

	for (i = 0 ; i < 8 ; i++)
	{
		for (y = 0 ; y < 8 ; y++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
