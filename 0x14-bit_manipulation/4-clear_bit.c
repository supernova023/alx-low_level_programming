#include "main.h"

/**
 * clear_bit - replace bit at index with 0
 * @n: number to replace bit in
 * @index: index to replace bit at
 * Return: 1 if success or -1 if fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	/* check index is not larger than max for unsigned long int*/
	if (index > 64)
		return (-1);

	/*move n to position index and clear bit*/
	*n &= ~(1 << index);
	return (1);
}
