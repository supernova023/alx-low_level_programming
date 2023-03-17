#include <unistd.h>

/**
 * malloc_checked(unsigned int b) - entry point
 * @b: The number of byte to allocate
 *
 * Return: pointer to allocated memory.
 *
 */
void *malloc_checked(unsigned int b)
{
	char *i;

	i = malloc(b);
		if (i == NULL)
		exit(98);
		else
	return (i);
}
