#include "main.h"
/**
 * more_numbers - prints 10 times
 * return: nums x10
 */
void more_numbers(void)
{
	int x = 0;
	int i;

	while (x < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar(i + '0');
			_putchar(i % 10 + '0');
		}
		x++;
		_putchar('\n');
	}
}
