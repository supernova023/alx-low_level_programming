#include "main.h"
/**
 * _strchr - Entry point
 *
 *
 *@s: pointer to search in for character c
 *@c: character to search for
 *Return: position of character or NULL if character not found
 */

char *_strchr(char *s, char c)
{
	int i, j = 0;

	while (s[j])
	{
		j++;
	}

	for (i = 0; i <= j; i++)
	{
		if (s[i] == c)
		{
			s += i;
			return (s);
		}
	}
	return ('\0');
}
