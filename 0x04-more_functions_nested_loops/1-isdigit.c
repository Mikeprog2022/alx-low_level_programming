#include "main.h"
/**
 * _isdigit - Check if is a digit
 * @x: int
 * Return: 1/0
 */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}

	return (0);
}
