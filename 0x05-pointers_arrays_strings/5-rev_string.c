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

	while (len >= 0)
	{
		_putchar(s[len]);
		if (len == 0)
			break;
		len--;
	}
}
