#include "main.h"
/**
 * cap_string - Entry point
 *
 * @n: variable storing array to be converted
 *
 * Return: n converted to upper case
 */
char *cap_string(char *n)
{
	int i;
	char check;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i + 1] != '\0')
		{
			check = n[i];
			switch (check) {
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
			case '\n':
			case '\t':
			case ' ':
				if (n[i + 1] >= 'a' && n[i + 1] <= 'z')
				{
					n[i + 1] = (int)n[i + 1] - 32;
				}
				break;
			}
		}
	}
	return (n);
}
