#include <stdio.h>
#include "dog.h"
/**
 * new_dog - create 2nd copy of stored data from variable
 * @name: dog name
 * @age: dog age
 * @owner: name of dog owner
 *
 * Return: Void.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, k;
	dog_t *dog2;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	dog2 = malloc(sizeof(dog_t));
	if (dog2 == NULL)
	{
		free(dog2);
		return (NULL);
	}
	dog2->name = malloc(i * sizeof(dog2->name));
	if (dog2->name == NULL)
	{
		free(dog2->name);
		free(dog2);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		dog2->name[k] = name[k];

	dog2->age = age;
	dog2->owner = malloc(j * sizeof(dog2->owner));
	if (doge->owner == NULL)
	{
		free(dog2->owner);
		free(dog2->name);
		free(dog2);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		dog2->owner[k] = owner[k];

	return (dog2);
}
