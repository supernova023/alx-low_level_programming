#include "main.h"
/**
 * string_toupper - Entry point
 *
 * @n: variable storing array to be converted
 *
 * Return: n converted to upper case
 */
char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = (int)n[i] - 32;
		}
	}
	return (n);
}
