#include "main.h"
/**
 * _puts - Prints string
 * @str: pointer
 * Return: void
 */
void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
