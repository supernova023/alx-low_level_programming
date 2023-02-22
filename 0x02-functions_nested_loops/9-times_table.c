#include "main.h"
/**
 * times_table - Entry point
 * Description - print multiplication table
 *
 * Return
 */

void times_table(void)
{
	int h1, h2;

	for (h1 = 0; h1 < 10; h1++)
	{
		for (h2 = 0; h2 < 10; h2++)
		{
			_putchar('0' + (h1 * h2));
			if (h2 == 9)
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
