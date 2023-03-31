#include "main.h"
/**
 * _strcmp - Compares 2
 * @s1: 1st string
 * @s2: 2nd string
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int l;

	while (s1[a])
	{
		a++;
	}
	while (s2[b])
	{
		b++;
	}
	if (a <= b)
	{
		l = a;
	}
	else
	{
		l = b;
	}
	while (c <= l)
	{
		if (s1[c] == s2[c])
		{
			c++;
			continue;
		}
		else
		{
			d = s1[c] - s2[c];
			break;
		}
		c++;
	}
	return (d);
}
