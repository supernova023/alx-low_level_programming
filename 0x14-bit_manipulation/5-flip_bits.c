#include "main.h"

/**
 * flip_bits - determine number of bits to flip such that m = n
 * @n: number to evaluate
 * @m: number to evaluate
 * Return: number of bits to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0;
	unsigned int count = 0;

	unsigned long int temp = n ^ m; /* find flips required using XOR properties*/

		for (i = 0; i < (8 * sizeof(n)); i++)
		{
			if (temp & 1) /* if true, flip is required at position, add to count */
			{
				count++;
			}
			temp = temp >> 1; /*move to next position to check if flip required */
		}
	return (count);

}
