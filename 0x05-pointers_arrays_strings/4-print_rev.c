#include "main.h"
/**
 * print_rev - prints reverse
 * @s: pointer
 * Return: void
 */
void print_rev(char *s)
{
	int x;

	while (s[x] != '\0')
	{
		x++;
	}
	for (x -= 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
