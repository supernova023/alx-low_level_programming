#include "main.h"

/**
 * _strlen_recursion - Entry point
 *
 * @s: string to output
 * Return: integer with string length
 */

int _strlen_recursion(char *s)
{
	int strlen = 1;

	if (*s != '\0')
	{
	strlen = _strlen_recursion(s + 1) + 1;
	}

	return (strlen);
}
