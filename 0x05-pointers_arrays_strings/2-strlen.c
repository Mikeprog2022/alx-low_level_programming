#include "main.h"
/**
 * _strlen - length of string
 * @s: pointer
 * return: 0
 */
int _strlen(char *s)
{
	int x = 0;

	fro (; *s != '\0'; s++)
	{
		x++;
	}
	return (x);
}
