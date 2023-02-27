#include "main.h"

/**
 * _puts - Entry Point
 * Description: output string
 * @str: string to output
 *
 * Return: string length
 */
void _puts(char *str)
{
	int len = -1;

	while (str[len])
	{
		len++;
	}

	while (len >= 0)
	{
		_putchar(str[len]);
		len--;
	}
	_putchar('\n');
}
