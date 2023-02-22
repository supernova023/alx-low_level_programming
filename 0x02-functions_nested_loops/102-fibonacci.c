#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Description - determine sum
 * Return: 0
 */
int main(void)
{
	long int y, sum, num1, num2;

	num1 = 0;
	num2 = 1;

	for (y = 0; y < 50; y++)
	{
		sum = num1 + num2;
		num1 = num2;
		if (y < 49)
			printf("%d, ", sum);
		else
			printf("%d", sum);
		num2 = sum;
	}
	return (0);
}
