#include "main.h"
#include <stdio.h>

/**
 * _strcat - function that concatenates two strings.
 * @src: stringto be concatenated upon
 * the end of the string pointed to by @dest
 * @dest: string that will be appended
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}
