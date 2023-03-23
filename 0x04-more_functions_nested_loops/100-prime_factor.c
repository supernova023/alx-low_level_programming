#include <stdio.h>

/**
 * main - Extra point
 * Description - highest prime factor of 612852475143
 *
 *
 *
 * Return: 0 always
 */

int main(void)
{
	long int x, y, c;

	for (x = 612852475142; x >= 1; x--)
	{
		if (612852475143 % x == 0)
		{
			c = 0;
			for (y = 1; y < x; y++)
			{
				if (x % y == 0)
				{
					c = c + 1;
				}
			}
			if (c <= 1)
			{
				printf("%ld\n", x);
				break;
			}
		}
	}
	printf("\n");
	return (0);
}
