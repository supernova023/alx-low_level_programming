#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Description - determine sum
 * Return: 0
 */
int main(void)
{
	int y, sum;

	sum = 0;

	for (y = 1; y < 1024; y++)
	{
		if ((y % 3 == 0) || (y % 5 == 0))
		{
			sum = sum + y;
		}

	}
	printf("%d\n", sum);
	return (0);
}
