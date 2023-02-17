#include <stdio.h>

/**
 * main - Entry point
 * print out base 16 using putchar
 * used for loop
 * Return: Always 0(Success)
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);

	for (n = 'a'; n <= 'f'; n++)
		putchar(n);

	putchar('\n');
	return (0);
}
