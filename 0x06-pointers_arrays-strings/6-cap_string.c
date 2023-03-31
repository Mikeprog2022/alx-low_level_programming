#include "main.h"
#include <stdio.h>
/**
 * cap_string - Caps
 * @s: char
 * Return: char
 */
char *cap_string(char *s)
{
	int a = 0;
	int i;
	int x = 13;
	char y[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[a])
	{
		i = 0;
		while (i < x)
		{
			if ((a == 0 || s[a - 1] == y[i]) && (s[a] >= 97 && s[a] <= 122))
				s[a] -= 32;
			i++;
		}
		a++;
	}
	return (s);
}
