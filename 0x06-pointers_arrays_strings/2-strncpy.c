#include "main.h"

/**
 * _strcmp - Compares two strings but add inputted numbers of bytes
 * @dest: string to be appended upon
 * @src: string to be completed at end of dest
 * @n: integer parameter to compare index to
 * Return: void
 */

char *_strncpy(char *dest, char *src, int n);
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;

	}

	return (dest);
}
