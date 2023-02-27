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
	int len = 0;

	while (str[len])
	{
		_putchar(str[len]);
		len++;
	}

}
