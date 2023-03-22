#include "main.h"
/**
 * print_sign - Prints sign of num
 * @n - int
 * Description- Prints sign
 * Return: 0/1/-1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
