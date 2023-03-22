#include "function_pointers.h"

/**
 * array_iterator - print name using given function
 * @array: pointer to array of data to manipulate
 * @action: function to use to manipulate data
 * @size: array size
 * Return: void
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
