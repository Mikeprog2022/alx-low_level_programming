#include "main.h"
/**
 * print_alphabet_x10 - Prog exec
 * Description - Print alphabet
 * Return:NO return
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i <= 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
	_putchar('\n');
	i++;
	}
}
