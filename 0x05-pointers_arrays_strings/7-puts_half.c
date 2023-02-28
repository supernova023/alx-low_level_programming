#include "main.h"

/**
 * puts_half - Entry Point
 * Description: output the first half characters of string
 * @str: string to output
 *
 * Return: none
 */
void puts_half(char *str)
{
	int len = 0;
	int x = 0;

	while (str[len])
	{
		len++;
	}

	if (len % 2 == 0)
		x  = len / 2;
	else
		x = ((len - 1) / 2) + 1;


	while (x < len)
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
