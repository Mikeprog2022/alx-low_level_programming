#include "main.h"
/*
 * main - Entry point for the program
 *
 * Description: Printing without std libs
 *
 * Return: Always (0)
 */
int main(void)
{
	char x[] = "_putchar";
	int i;

	for (i = 0; x[i] != '\0'; i++)
	{
		_putchar(x[i]);
	}
	_putchar('\n');
	return (0);
}
