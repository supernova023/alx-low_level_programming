#include <stdio.h>
#include "main.h"
/**
 * main - Extra point
 * Description - FizzBuzz test solution
 *
 *
 *
 * Return: 0 always
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x > 1)
			printf(" ");
		if (x % 5 == 0 && x % 3 == 0)
		{
			printf("FizzBuzz");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", x);
		}
	}
	printf("\n");
	return (0);
}
