#include "main.h"
/**
 * _strncat - Concats. strings
 * @dest: Destination
 * @src: Source
 * @n: limit
 * Return: Pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (dest[x])
	{
		x++;
	}
	while (y < n && src[y])
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x + n + 1] = '\0';
	return (dest);
}
