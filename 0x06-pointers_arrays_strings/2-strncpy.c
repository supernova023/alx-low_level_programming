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
	int i;

	i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
