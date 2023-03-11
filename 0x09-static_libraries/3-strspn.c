#include "main.h"
/**
 * _strspn - Entry point
 *
 *
 *@s: pointer to search in for character c
 *@accept: characters to search for
 *Return: count of characters found
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		k = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				k = 0;
				break;
			}
		}
		if (k == 1)
			break;
	}
	return (i);
}
