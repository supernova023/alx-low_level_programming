#include "main.h"
/**
 * _strncat - Entry point
 *
 * @dest: variable storing destination location
 * @src: variable storing source data
 * @n: variable limiting number of characters to be used from src
 * Return: resulting string to destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int cd, cs, i;

	i = 0;
	cd = 0;
	cs = 0;

	while (dest[cd])
	{
		cd++;
	}
	while (src[cs])
	{
		cs++;
	}
	for (i = cd; i < (cd + cs); i++)
	{
		if ((i - cd) == n)
		{
			i = cd + cs;
		}
		else
		{
			dest[i] = src[i - cd];
		}
	}
	return (dest);
}
