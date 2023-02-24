#include <stdio.h>
#include "main.h"
/**
 * print_triangle - Extra point
 * Description - print triangle size n
 * @size: variable determines line length
 *
 *
 * Return
 */

void print_triangle(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 0; y < size; y++)
		{
			for (x = 0; x < size; x++)
			{
				if (x < (size - y - 1))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}

}
