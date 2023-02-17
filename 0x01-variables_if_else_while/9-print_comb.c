#include <stdio.h>

/**
 * main - Entry point
 * print out cominations of single digit numbers using putchar
 * used for loop
 * Return: Always 0(Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
