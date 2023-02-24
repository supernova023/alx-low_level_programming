#include <stdio.h>
#include "main.h"
/**
 * _isdigit - Extra point
 * Description - check if character is a number
 * @c: character being checked
 *
 *
 * Return: 1 if true, 0 if false
 */

int _isdigit(int c)
{
	if (c >= ('0' + 0) && c <= ('0' + 9))
		return (1);
	else
		return (0);
}
