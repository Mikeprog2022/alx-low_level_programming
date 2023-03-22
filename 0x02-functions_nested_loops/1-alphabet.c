#include "main.h"
/**
 * main - Program exec
 * Description - Writing the aplhabet
 * Return: 0
 */
int main(void)
{
	char x[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; x[i] != '\0'; i++)
	{
		_putchar(x[i]);
	}
	putchar('\n');
	return (0);
}
