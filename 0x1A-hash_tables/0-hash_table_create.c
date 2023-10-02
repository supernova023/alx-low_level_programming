#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         else - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hta;
	unsigned long int i;

	hta = malloc(sizeof(hash_table_t));
	if (hta == NULL)
		return (NULL);

	hta->size = size;
	hta->array = malloc(sizeof(hash_node_t *) * size);
	if (hta->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		hta->array[i] = NULL;

	return (hta);
}
