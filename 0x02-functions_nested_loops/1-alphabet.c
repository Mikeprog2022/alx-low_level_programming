#include "main.h"
/**
 * print_alphabet - Program exec
 * Description - Writing the aplhabet
 * Return: 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
