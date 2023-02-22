#include "main.h"
/**
 * print_last_digit - Entry point
 * Description - determine value of last digit
 * @c: interger being checked
 * Return: y = value of last digit
 */
int print_last_digit(int c)
{
	int y;

	if (c < 0)
		c = -c;

	y = c % 10;
	_putchar('0' + y);
	return (y);
}
