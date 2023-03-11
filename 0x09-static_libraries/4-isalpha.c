#include "main.h"
/**
 * _isalpha - Entry point
 * Description - determine if alphabet
 * @c: character being checked
 * Return: y = 1 if alphabet, y = 0 if not
 */
int _isalpha(int c)
{
	int y;

	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		y = 1;
	}
	else
	{
		y = 0;
	}
	return (y);
}
