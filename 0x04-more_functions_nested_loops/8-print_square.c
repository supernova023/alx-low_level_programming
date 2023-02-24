#include <stdio.h>
#include "main.h"
/**
 * print_square - Extra point
 * Description - print square  n characters long
 * @n: variable determines line length
 *
 *
 * Return
 */

void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 0; y < n; y++)
		{
			for (x = 0; x < n; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

}
