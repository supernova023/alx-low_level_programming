#include <string.h>
#include "main.h"

/**
 * str_concat - Entry point
 *
 * @s1: 1st string to concat
 * @s2: 2nd string to concat
 * Return: concat string
 * On error, NULL is returned
 */
char *str_concat(char *s1, char *s2)
{
	char *cpy, *cret;
	unsigned int len = 0;

	if (s1 == NULL)
	{
		s1 = "";
		len = 0;
	}
	else
	{
		len = strlen(s1);
	}
	if (s2 == NULL)
	{
		s2 = "";
		len++;
	}
	else
	{
		len = len + strlen(s2);
	}
	cpy = malloc(len * sizeof(char) + 1);
	cret = cpy;
	if (cpy == NULL)
	{
		return (NULL);
	}
	else
	{
		while (*s1)
		{
			*cpy++ = *s1++;
		}
		while (*s2)
		{
			*cpy++ = *s2++;
		}
	}
	return (cret);
}
