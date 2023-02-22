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

	sum = 1;

	for (y = 0; y < 48; y++)
	{
		sum = sum + y;
		printf("%d, ", sum);
	}
	printf("%d\n", (sum + 49));
	return (0);
}
