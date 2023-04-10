#include "main.h"

/**
 * print_binary - convert decimal to binary
 * @n: decimal to convert to binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1); /*reccursively evaluate and shift bits to the right */
	}
	_putchar('0' + (1 & n)); /* print 0 by default unless last bit of n = 1 */
}
