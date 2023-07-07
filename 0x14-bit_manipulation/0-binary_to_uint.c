#include "main.h"

/**
 * binary_to_uint - convert bin num to dec in unsigned int type
 * @b: bin number
 * Return: converted num
 */

unsigned int binary_to_uint(const char *b)
{
  int c;
  unsigned int uint = 0;

  if (!b)
    {
      return (0);
    }

  for (c = 0; b[c]; c++)
    {
      if (b[c] < 48 || b[c] > 49)
	return (0);

      uint = 2 * uint + (b[c] - 48);
    }
  return (uint);
}
