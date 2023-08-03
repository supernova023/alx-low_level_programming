#include "main.h"

/**
 * get_endianness - check to see if computer is storing in big or little
 * endianness format
 *
 * Return: 1 for little endianness and 0 for big endianness
 */

int get_endianness(void)
{
	unsigned int endianness = 1;
	char *check = (char *) &endianness;

	return ((int)(*check));

}
