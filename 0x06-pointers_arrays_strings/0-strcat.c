#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @src: cadena a copiar
 * @dest: destino de la cadena.
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++]; index++)
		dest_len++;

	for (ondex = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
