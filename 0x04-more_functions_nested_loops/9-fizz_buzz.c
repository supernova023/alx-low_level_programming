#include <stdio.h>
#include "main.h"
/**
 * print_square - Extra point
 * Description - print square size n
 * 
 *
 *
 * Return
 */

void main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 5 == 0 && x % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", x);
		}
	}
}
