#include <stdio.h>
#include "main.h"
/**
 * print_square - Extra point
 * Description - print square size n
 * @size: variable determines line length
 *
 *
 * Return
 */

void print_square(int size)
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
				_putchar('#');
			}
			_putchar('\n');
		}
	}

}
