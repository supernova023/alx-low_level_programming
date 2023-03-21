#include "dog.h"
/**
 * init_dog - initialise variable
 * @d: variable name for struct
 * @name: dog name
 * @age: age of dog
 * @owner: name of dog owner
 * Return: Void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
