#include "main.h"
/**
 * jack_bauer - Entry point
 * Description - print every minute
 *
 * Return
 */

void jack_bauer(void)
{
	int h1, h2, m1, m2;

	for (h1 = 0; h1 < 2; h1++)
	{
		for (h2 = 0; h2 < 10; h2++)
		{
			for (m1 = 0; m1 < 6; m1++)
			{
				for (m2 = 0; m2 < 10; m2++)
				{
					_putchar('0' + h1);
					_putchar('0' + h2);
					_putchar(':');
					_putchar('0' + m1);
					_putchar('0' + m2);
					_putchar('\n');
				}
			}
		}
	}

	for (h1 = 2; h1 < 3; h1++)
	{
		for (h2 = 0; h2 < 4; h2++)
		{
			for (m1 = 0; m1 < 6; m1++)
			{
				for (m2 = 0; m2 < 10; m2++)
				{
					_putchar('0' + h1);
					_putchar('0' + h2);
					_putchar(':');
					_putchar('0' + m1);
					_putchar('0' + m2);
					_putchar('\n');
				}
			}
		}
	}
}
