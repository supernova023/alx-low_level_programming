#include "main.h"

/**
 * _strlen - Entry Point
 * Description: swap 2 integers
 * @s: string to find length of
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		*s = *s + 1;
	}
	return (len);
}
