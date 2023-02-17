#include <stdio.h>

/**
 * main - Entry point
 * print out alphabet using putchar
 * used for loop
 * Return: Always 0(Success)
 */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
		putchar(n);

	for (n = 'A'; n <= 'Z'; n++)
		putchar(n);

	putchar('\n');
	return (0);
}
