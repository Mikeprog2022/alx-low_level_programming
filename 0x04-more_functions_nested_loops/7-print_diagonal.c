#include "main.h"
/**
 * print_diagonal - prints diag line
 * @n: line
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar(92);
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
