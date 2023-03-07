#include "main.h"
/**
 * _strpbrk - Entry point
 *
 *
 *@s: pointer to search in for character c
 *@accept: characters to search for
 *Return: characters found
 */

char _strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
