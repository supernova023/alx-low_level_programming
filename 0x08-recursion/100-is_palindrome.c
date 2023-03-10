#include "main.h"
int checkpal(char *s, int t, int c);
/**
 * is_palindrome - Entry point
 *
 * @s: string to check if palindrome
 * Return: 1 if prime, 0 if not
 */

int is_palindrome(char *s)
{
	int root = 1, x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	if (x % 2 == 0)
	{
		root = 0;
	}
	else
	{
		root = checkpal(n, x, x);
	}

	return (root);
}

/**
 * checkpal - Entry point
 * @s: test string
 * @t: length of string
 * @c: position to test
 * Return: 1 if palendrome, 0 if not
 */

int checkpal(char *s, int t, int c)
{
	int r;
	long int check;

	if (c < 0)
	{
		return (1);
	}
	check = s[t - c] - s[c];
	if (check == 0)
	{
		r = checkpal(s, t, c - 1);
	}
	else
	{
		r = 0;
	}

	return (r);
}
