#include "main.h"

/**
 * rev_string - Entry Point
 * Description: output string in reverse
 * @s: string to output
 *
 * Return: none
 */
void rev_string(char *s)
{
	int len = 0;
	int x = 0;
	char s2[20];

	while (s[len])
	{
		*(s2 + len) = *(s + len);
		len++;
	}

	len = len - 1;
	x = len;

	while (len >= 0)
	{
		*(s + (x - len)) = *(s2 + len);
		len--;
	}
}
