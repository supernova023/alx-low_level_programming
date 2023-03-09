#include "main.h"
int sqrtfin(int s, int t);
/**
 * _sqrt_recursion - Entry point
 *
 * @n: integer to find natural root
 * Return: natural root if it exists, -1 if no natural root
 */

int _sqrt_recursion(int n)
{
	int root = 1, x = n;

	if (n < 0)
	{
		root = -1;
	}
	else if (n == 0)
	{
		root = 0;
	}
	else
	{
		root = sqrtfin(n, x);
	}

	return (root);
}

/**
 * sqrtfin - Entry point
 * @t: test root
 * @s: integer to find natural root
 * Return: natural root if it exists, -1 if no natural root
 */

int sqrtfin(int s, int t)
{
	int r;
	long long int check = s - (t * t);

	if (t == 0)
	{
		return (-1);
	}
	if (check == 0)
	{
		r = t;
	}
	else
	{
		r = sqrtfin(s, t - 1);
	}

	return (r);
}
