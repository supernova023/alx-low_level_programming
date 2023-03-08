#include "main.h"

/**
 * factorial - Entry point
 *
 * @n: integer to find factorial of
 * Return: factorial for n greater than or equal to zero, -1 for less than zero
 */

int factorial(int n)
{
	int fac = 1;

	if (n < 0)
	{
		fac = -1;
	}
	else if (n == 0)
	{
		fac = 1;
	}
	else
	{
		fac = n * factorial(n - 1);
	}

	return (fac);
}
