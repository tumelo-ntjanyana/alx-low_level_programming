#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: matrix
 */

void print_chessboard(char (*a)[8])
{
	int c;
	int b;

	for (c = 0; c < 8; c++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(*(*(i + a) + j));
		}
		_putchar('\n');
	}
}
