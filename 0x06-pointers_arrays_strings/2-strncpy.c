#include "main.h"

/**
 * _strcmp - Compares two strings but add inputted numbers of bytes
 * @dest: string to be appended upon
 * @src: string to be completed at end of dest
 * @n: integer parameter to compare index to
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n);
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}

