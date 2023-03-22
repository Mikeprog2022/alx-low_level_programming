#include "main.h"
/*
 * main - Print _putchar
 * Return: 0
 * Descr: Printing without std libs
 */
int main(void)
{
	char x[] = "_putchar";
	int i;

	for (i = 0; x[i] =! '\0'; i++)
	{
		_putchar(x[i]);
	}
	_putchar('\n');
	return (0);
}
