#include "main.h"

/**
 * rev_string - Entry Point
 * Description: output string in reverse
 * @s: string to output
 *
 * Return: none
 */
void rev_stringy(char *s)
{
	int len = 0;
	int x = 0;
	char *s2;

	while (s[len])
	{
		*(s2 + len) = *(s + len);
	}

	x = len;

	while (len >= 0)
	{
		*(s + (x - len)) = *(s2 + len);
		len--;
	}
}
