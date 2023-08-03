#include "main.h"

/**
 * print_binary - print bin value of num
 * @n: Number to print
 * Return: void
 */

void print_binary(unsigned long int n)
{
	/* check if n is empty, if not move bit by 1 and print using putchar */
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
