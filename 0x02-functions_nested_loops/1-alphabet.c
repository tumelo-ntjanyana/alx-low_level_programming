#include "main.h"
/**
 * print_alphabet->prints the alphabet, in lowercase, followed by a new line
 * Return: Always 0
 * function that prints the alphabet, in lowercase, followed by a new line
 */

void print_alphabet(void)
{
	int alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar (alp);
	}
	_putchar ('\n');
}
