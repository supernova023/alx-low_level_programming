#include <string.h>
#include "main.h"

/**
 * _strdup - Entry point
 *
 * @str: string to duplicate
 * Return: duplicate string
 * On error, NULL is returned
 */
char *_strdup(char *str)
{
	char *cpy, *cret;

	if (str == NULL)
	{
		return (NULL);
	}
	cpy = malloc((1 + strlen(str)) * sizeof(char));
	cret = cpy;
	if (cpy == NULL)
	{
		return (NULL);
	}
	else
	{
		while (*str)
		{
			*cpy++ = *str++;
		}
	}
	return (cret);
}
