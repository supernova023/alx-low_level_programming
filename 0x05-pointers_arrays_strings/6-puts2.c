#include "main.h"

/**
 * puts2 - Entry Point
 * Description: output every second character of string
 * @str: string to output
 *
 * Return: string length
 */
void puts2(char *str)
{
	int len = 0;

	while (str[len])
	{
		if (len % 2 == 0)
		{
			_putchar(str[len]);
		}
		len++;
	}
	_putchar('\n');
}
