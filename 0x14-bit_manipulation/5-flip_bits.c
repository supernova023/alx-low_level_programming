#include "main.h"

/**
 * flip_bits - number of bits needed to flip to mirror each other
 * @n: number 1 to compare
 * @m: number 2 to compare
 * Return: number of flips required
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int ex, nobits = 0;

	/* compare m to n and store in ex when bits are different*/
	/* move bit position of ex by 1 to check each bit if flip required*/
	/* add value of each bit stored in ex to get number of flips*/
	for (ex = n ^ m; ex > 0; ex >>= 1)
	{
		nobits += (ex & 1);
	}

	return (nobits);
}
