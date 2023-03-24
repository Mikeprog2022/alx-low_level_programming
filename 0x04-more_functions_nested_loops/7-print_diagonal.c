#include "main.h"
/**
 * print_diagonal - prints diag line
 * @n: line
 */
void print_diagonal(int n)
{
	int i;
	int y;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (y = 0; y < i; y++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
