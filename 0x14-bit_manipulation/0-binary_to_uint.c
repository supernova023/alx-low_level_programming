#include "main.h"

/**
 * binary_to_uint - convert number from binary t unsigned integer
 * @b: binary number to convert
 * Return: converted binary if possible else return 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int count = 0, i = 0;

	while (b[count] != '\0')
	{
		if (b[count] - '0' == 0)
		{
			count++;
		}
		else if (b[count] - '0' == 1)
		{
			count++;
		}
		else
		{
			return (0);
		}
	}
	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; i < count; i++)
		{
		sum = sum * 2 + (b[i] - '0');
		}
	return (sum);

}
