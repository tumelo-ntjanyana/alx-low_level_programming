#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 *
 * Description: Get a random number and check its last digit, compare it with 5
 *
 * Return: 0
 *
 */
int main (void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		putchar(c);
	}
	for (c = 'A' ; c <= 'Z' ; c++)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
