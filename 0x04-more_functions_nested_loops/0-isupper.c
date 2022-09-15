#include "main.h"
#include <ctype.h>

/**
 * _isupper - function block
 * Description: check for uppercase
 * @c: integer
 * Return: 0
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
