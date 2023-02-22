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

	y = c % 10;
	_putchar(y + 48);
	return (y);
}
