#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @src: stringto be concatenated upon 
 * the end of the string pointed to by @dest 
 * @dest: string that will be appended 
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (ondex = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
