#include "main.h"

/**
 * _strcpy - Entry Point
 * Description: copy from src to dest
 * @src: string source
 * @dest: string destination
 * Return: dest output
 */
char *_strcpy(char *dest, char *src)
{
	int len = -1;

	do
	{
		len++;
		dest[len] = src[len];
	} while (src != '\0');

	return (dest);
}
