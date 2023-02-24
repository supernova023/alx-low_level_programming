#include <stadio.h>
#include "main.h"
/**
 * _isupper - Extra point
 * Description - check if letter is upper case
 * @c: character being checked
 *
 *
 * Return: 1 if true, 0 if false
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
