#include <stdio.h>

/**
 * main - Entry point
 * print out cominations of single digit numbers using putchar
 * used for loop
 * Return: Always 0(Success)
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
