#include "main.h"
/**
 * main - prints _putchar, fllowd by a new linees
 * Return: Alwys 0 (Success)
 */
int main(void)
{
	char *tumelo = "_putchar";

	while (*tumelo)
	{
		_putchar(*tumelo);
		tumelo++;
	}
	_putchar('\n');
	return (0);
}
