#include "main.h"
/**
 * print_most_numbers - Dont print 2 and 4
 * Return: 0-9 wihtout 2,4
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
