#include "function_pointers.h"

/**
 * int_index - print name using given function
 * @array: pointer to array of data to manipulate
 * @cmp: function to use to manipulate data
 * @size: array size
 * Return: index on success, -1 on failure
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	{
		return (-1);
	}

	if (cmp != NULL)
	{
		if (array != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if ((*cmp)(array[i]) != 0)
				{
					return (i);
				}
			}
		}
	}
	return (-1);
}
