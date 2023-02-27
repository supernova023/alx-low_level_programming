#include "main.h"

/**
 * swap_int - Entry Point
 * Description: swap 2 integers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c, d;

	c = a;
	d = b;
	*a = d;
	*b = c;
}
