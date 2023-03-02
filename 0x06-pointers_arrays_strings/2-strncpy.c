#include "main.h"
/**
 * _strncpy - Entry point
 *
 * @dest: variable storing destination location
 * @src: variable storing source data
 * @n: variable limiting number of characters to be used from src
 * Return: resulting string to destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int cd, i;

	i = 0;
	cd = 0;

	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
		{
			cd = i;
			i = n;
		}
		else
		{
			dest[i] = src[i];
		}
	}
	while (cd < n)
	{
		dest[cd] = '\0';
		cd++;
	}
	return (dest);
}
