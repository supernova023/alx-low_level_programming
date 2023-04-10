#include "main.h"

/**
 * set_bit - change bit at specified index
 * @n: number to evaluate
 * @index: index position to set bit to 1 at
 * Return: return 1 if successful else return -1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp = 1;

	if ((8 * sizeof(n)) < index) /* multiply by 8 to calculate number of  bits */
	{
		return (-1); /* check to index is in range of bits assigned to n */
	}
	temp = temp << index; /* shift 1 index positions to the left */
	*n = (*n | temp); /* compare bits of *n and temp, only bit at index will */
	/* change if equal to 0. */
	return (1);

}
