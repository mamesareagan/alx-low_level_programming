#include "main.h"
/**
 * print_chessboard - prints a chessboard
 * @a: chessboard to be drawn
 *
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int b;

	for (i = 0; a[i][7]; i++)
	{
		for (b = 0; b < 8; b++)
			_putchar(a[i][b]);

		_putchar('\n');
	}
}
