#include "main.h"
/**
 * print_alphabet-> function that prints 10 times the alphabet, in lowercase, followed by a new line
 * Return - 0
 */
void print_alphabet_x10(void)
{
	int a = 0;
	int b;

	while (b < 10)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar('\n');
		}
		a++;
		_putchar('\n');
	}
}
