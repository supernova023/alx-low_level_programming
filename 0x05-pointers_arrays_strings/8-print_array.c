#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry Point
 * Description: output n places from array
 * @a: array to output from
 * @n: number out places to output
 * Return: none
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < a; i++)
	{
		if (i == (a - 1))
		{
			printf("%d\n", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
}
