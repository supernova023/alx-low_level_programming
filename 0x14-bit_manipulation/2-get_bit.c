#include "main.h"

/**
 * get_bit - find bit at specified index
 * @n: number to evaluate
 * @index: index position to find bit at
 * Return: return bit at index if possible else return -1.
 */

int get_bit(unsigned long int n, unsigned int index)
{

	if ((8 * sizeof(n)) < index) /* multiply by 8 to calculate number of  bits */
	{
		return (-1); /* check to index is in range of bits assigned to n */
	}
	return ((n >> index) & 1); /* shift bits to the right, return value of bit */

}
