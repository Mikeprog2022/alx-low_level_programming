#include "main.h"
/**
 * more_numbers - prints 10 times
 * return: nums x10
 */
void more_numbers(void)
{
	int x;
	int i;

	while (x <= 10)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i + '0');
		}
		x++;
		_putchar('\n');
	}
}
