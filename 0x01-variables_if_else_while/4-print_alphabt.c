#include <stdio.h>
/**
 * main - Print the alphabet in lowercase letters, except for e and q
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		if (letters != 'e' && letters != 'q')
		{
			putchar(letter);
		}
		putchar('\n');
	}
	return (0);
}


