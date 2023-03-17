#include "main.h"

/**
 * array_range - entry point
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to range of values from min to max or NULL
 *
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	arr = malloc(sizeof(int) * len);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		arr[i] = min++;

	return (arr);
}
