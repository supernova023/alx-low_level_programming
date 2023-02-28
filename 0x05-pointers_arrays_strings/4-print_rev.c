#include "main.h"

/**
 * print_rev - Entry Point
 * Description: output string in reverse
 * @s: string to output
 *
 * Return: none
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len])
	{
		len++;
	}

	while (len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
