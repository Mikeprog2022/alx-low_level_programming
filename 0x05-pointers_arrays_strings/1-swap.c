#include "main.h"
/**
 * swap_int - swaps
 * @a - pointer
 * @b - pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x; 
}
