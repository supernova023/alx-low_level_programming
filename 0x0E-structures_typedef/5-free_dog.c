#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - clear 2nd copy of stored data from variable
 * @d: pointer to stored data
 *
 * Return: Void.
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
		{
			free(d->name);
		}
		if (d->owner)
		{
			free(d->owner);
		}
		free(d);
	}
}
