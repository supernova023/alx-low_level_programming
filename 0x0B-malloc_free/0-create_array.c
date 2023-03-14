#include "main.h"

/**
 * create_array - Entry point
 * @c: The character to enter into array
 * @size: size of array
 * Return: array with c of size size.
 * On error, NULL is returned
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(size * sizeof(char));
	if (!a)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			a[i] = c;
		}
	}
	return (a);
}
