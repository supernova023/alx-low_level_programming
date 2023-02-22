#include "main.h"
/**
 * print_sign - Entry point
 * Description - determine if positive, negative or zero
 * @c: interger being checked
 * Return: y = 1 if positive, y = 0 if zero, y = -1 if negative
 */
int print_sign(int c)
{
	int y;

	if (c > 0)
	{
		_putchar('+');
		y = 1;
	}
	else if (c == 0)
	{
		_putchar('0');
		y = 0;
	}
	else
	{
		_putchar('-');
		y = -1;
	}
	return (y);
}
