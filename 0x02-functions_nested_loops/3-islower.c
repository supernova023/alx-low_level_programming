#include "main.h"
/**
 * _islower - Entry point
 * Description - determine lower case
 * @c: character being checked
 * Return: y = 1 if lower case, y = 0 if not
 */
int _islower(int c)
{
	int y;

	if (c > 96)
	{
		y = 1;
	}
	else
	{
		y = 0;
	}
	return (y);
}
