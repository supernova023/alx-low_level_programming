#include "main.h"

/**
 * get_bit - value of a bit at a given index
 * @n: decimal parameter
 * @index: index
 * Return: val
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	/*shift n to position index*/
	bit = (n >> index);

	/*check if index is greater than the max size of unsigned long int */
	if (index > 32)
		return (-1);
	/*if index less that max size, return value of but at index*/
	return (bit & 1);

}
