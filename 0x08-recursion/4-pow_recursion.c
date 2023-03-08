#include "main.h"

/**
 * _pow_recursion - Entry point
 * @x: integer to be raised to exponent
 * @y: exponent to raise integer by
 * Return: integer raised to exponent for y >= to zero, -1 for y < zero
 */

int _pow_recursion(int x, int y)
{
	int pow = 1;

	if (y < 0)
	{
		pow = -1;
	}
	else if (y == 0)
	{
		pow = 1;
	}
	else
	{
		pow = x * factorial(x, y - 1);
	}

	return (pow);
}
