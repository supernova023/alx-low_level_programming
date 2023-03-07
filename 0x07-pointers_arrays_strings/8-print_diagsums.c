#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - Entry point
 *
 *
 *@a: array of numbers
 *@size: size of array
 *Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int b, s1 = 0, s2 = 0;

	for (b = 0; b < size; b++)
	{
		s1 += a[(size + 1) * b];
		s2 += a[(size - 1) * (b + 1)];
	}
	printf("%d, %d\n", s1, s2);
}
