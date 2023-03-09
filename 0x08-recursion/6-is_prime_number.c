#include "main.h"
int checkprime(int s, int t);
/**
 * is_prime_number - Entry point
 *
 * @n: integer to check if prime
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	int root = 1, x = n - 1;

	if (n < 2)
	{
		root = 0;
	}
	else
	{
		root = checkprime(n, x);
	}

	return (root);
}

/**
 * checkprime - Entry point
 * @t: test root
 * @s: integer to find prime of
 * Return: 1 if prime, 0 if not
 */

int checkprime(int s, int t)
{
	int r;
	long int check;

	check = s % t;

	if (t == 1)
	{
		return (1);
	}
	if (check == 0)
	{
		r = 1;
	}
	else
	{
		r = checkprime(s, t - 1);
	}

	return (r);
}
