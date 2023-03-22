#include "main.h"
/**
 * _islower - Return true if lower
 * Descr - Return 1 if lower
 * @c: char
 * Return: 0/1
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
