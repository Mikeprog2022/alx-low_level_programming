#include "main.h"
/**
 * print_square - prints square
 * @size:square dimensions
 */
void print_square(int size)
{
	int i = 0;
	int x;

	if (size > 0)
	{
		while (i < size)
		{
			for (x = 0; x < size; x++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
