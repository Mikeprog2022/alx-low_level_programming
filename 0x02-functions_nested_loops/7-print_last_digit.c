#include "main.h"
/**
 * print_last_digit - Prints last digit
 * Descr- Prints
 * @n: int
 * Return: Last dig val
 */
int print_last_digit(int n)
{
	int nv;

	if (n < 0)
	{
		nv = -1 * (n % 10);
		_putchar(nv + '0');
		return (nc);
	}
	else
	{
		nv = n % 10;
		_putchar(nv + '0');
		return (nv);
	}
}
