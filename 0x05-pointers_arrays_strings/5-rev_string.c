#include "main.h"
/**
 * rev_string - reverses string
 * @s: pointer
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0;
	int x = 0;
	char y;

	while (s[len] != '\0')
		len++;
	while (x < len--)
	{
		y = s[x];
		s[x++] = s[len];
		s[len] = y;
	}
}
