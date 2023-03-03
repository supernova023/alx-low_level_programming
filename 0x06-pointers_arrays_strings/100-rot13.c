#include "main.h"
void replaceAll(char *str, char oldChar, char newChar);
/**
 * rot13 - Entry point
 *
 * @n: variable storing array to be converted
 *
 * Return: n converted to 1337
 */
char *rot13(char *n)
{
	replaceAll(n, 'A', 'N');
	replaceAll(n, 'B', 'O');
	replaceAll(n, 'C', 'P');
	replaceAll(n, 'D', 'Q');
	replaceAll(n, 'E', 'R');
	replaceAll(n, 'F', 'S');
	replaceAll(n, 'G', 'T');
	replaceAll(n, 'H', 'U');
	replaceAll(n, 'I', 'V');
	replaceAll(n, 'J', 'W');
	replaceAll(n, 'K', 'X');
	replaceAll(n, 'L', 'Y');
	replaceAll(n, 'M', 'Z');
	replaceAll(n, 'N', 'A');
	replaceAll(n, 'O', 'B');
	replaceAll(n, 'P', 'C');
	replaceAll(n, 'Q', 'D');
	replaceAll(n, 'R', 'E');
	replaceAll(n, 'S', 'F');
	replaceAll(n, 'T', 'G');
	replaceAll(n, 'U', 'H');
	replaceAll(n, 'V', 'I');
	replaceAll(n, 'W', 'J');
	replaceAll(n, 'X', 'K');
	replaceAll(n, 'Y', 'L');
	replaceAll(n, 'Z', 'M');
	replaceAll(n, 'a', 'n');
	replaceAll(n, 'b', 'o');
	replaceAll(n, 'c', 'p');
	replaceAll(n, 'd', 'q');
	replaceAll(n, 'e', 'r');
	replaceAll(n, 'f', 's');
	replaceAll(n, 'g', 't');
	replaceAll(n, 'h', 'u');
	replaceAll(n, 'i', 'v');
	replaceAll(n, 'j', 'w');
	replaceAll(n, 'k', 'x');
	replaceAll(n, 'l', 'y');
	replaceAll(n, 'm', 'z');
	replaceAll(n, 'n', 'a');
	replaceAll(n, 'o', 'b');
	replaceAll(n, 'p', 'c');
	replaceAll(n, 'q', 'd');
	replaceAll(n, 'r', 'e');
	replaceAll(n, 's', 'f');
	replaceAll(n, 't', 'g');
	replaceAll(n, 'u', 'h');
	replaceAll(n, 'v', 'i');
	replaceAll(n, 'w', 'j');
	replaceAll(n, 'x', 'k');
	replaceAll(n, 'y', 'l');
	replaceAll(n, 'z', 'm');
	replaceAll(n, 'N', '1');
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
