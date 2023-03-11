#include "main.h"
/**
 * _memcpy - Entry point
 *
 *@dest: pointer to be filled
 *@src: pointer to fill pointer from
 *@n: number of memory spaces to fill in dest from src
 *Return: pointer to memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
