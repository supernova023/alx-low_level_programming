#include "main.h"
/**
 * print_times_table - Entry point
 * Description - print multiplication table
 * @c: table size factor
 */
void print_times_table(int c)
{
	int h1, h2, t;

	if (c > 15 || c < 0)
		c = 0;
	for (h1 = 0; h1 <= c; h1++)
	{
		for (h2 = 0; h2 <= c; h2++)
		{
			t = h1 * h2;
			if (t > 99)
			{
				_putchar('0' + ((t - (t % 100)) / 100));
				_putchar('0' + (((t % 100) - (t % 10)) / 10));
			}
			else if (t > 9)
			{
				_putchar(' ');
				_putchar('0' + ((t - (t % 10)) / 10));
			}
			else
			{
				if (t != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
			}
			_putchar('0' + (t % 10));
			if (h2 == c)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
