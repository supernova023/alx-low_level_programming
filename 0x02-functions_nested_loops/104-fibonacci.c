#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Description - determine sum
 * Return: 0
 */
int main(void)
{
	unsigned long  y, sum, num1, num2;

	num1 = 0;
	num2 = 1;

	for (y = 0; y < 100; y++)
	{
		sum = num1 + num2;
		num1 = num2;
		if (y < 98)
			printf("%lu, ", sum);
		else
			printf("%lu", sum);
		num2 = sum;
	}
	printf("\n");
	return (0);
}
