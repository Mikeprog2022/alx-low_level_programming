#include "main.h"
/**
 * _strncpy - Copies
 * @dest: Destionation
 * @src: Source
 * @n: Max num copied
 * Return: Pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (src[x] != '\0' && x < n)
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
