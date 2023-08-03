#include "main.h"

/**
 * set_bit - replace bit at index with 1
 * @n: number to replace bit in
 * @index: index to replace bit at
 * Return: 1 if success or -1 if fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int setbit = 1;

	/* check index less than max size */
	if (index > 64)
		return (-1);

	/* move bits index places*/
	setbit = setbit << index;
	/*set bit at index*/
	*n = (*n | setbit);
	return (1);
}
