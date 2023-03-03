#include "main.h"
/**
 * leet - Entry point
 *
 * @n: variable storing array to be converted
 *
 * Return: n converted to 1337
 */
char *leet(char *n)
{
	replaceAll(n, 'A', '4');
	replaceAll(n, 'a', '4');
	replaceAll(n, 'E', '3');
	replaceAll(n, 'e', '3');
	replaceAll(n, 'O', '0');
	replaceAll(n, 'o', '0');
	replaceAll(n, 't', '7');
	replaceAll(n, 'T', '7');
	replaceAll(n, 'l', '1');
	replaceAll(n, 'L', '1');
	return (n);
}

/**
 * replaceAll - Entry point
 *
 * @str: variable storing array to be converted
 * @oldChar: variable storing character to be replaced
 * @newChar: variable storing character to replace with
 * Return: none
 */
void replaceAll(char *str, char oldChar, char newChar)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == oldChar)
		{
			str[i] = newChar;
		}

		i++;
	}
}
