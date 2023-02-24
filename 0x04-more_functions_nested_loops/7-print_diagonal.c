#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - Extra point
 * Description - print diagonal line n characters long
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
	}
	else
	{
		for (y = 0; y < n; y++)
		{
			for (x = 0; x < n; x++)
			{
				if (x == y)
				{
					_putchar('_');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar(' ');
		}
	}

}
