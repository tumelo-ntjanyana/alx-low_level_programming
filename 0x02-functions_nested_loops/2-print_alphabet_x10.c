#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 */

void print_alphabet_x10(void)
{
	int n;
	int co;

	for (n = 0; n <= 9; n++)
	{
		for (co = "a"; co <= "z"; co++)
		{
			_putchar(co);
		}
		_putchar('\n');
		}
}
