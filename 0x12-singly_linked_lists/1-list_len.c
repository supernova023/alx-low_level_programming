#include "lists.h"

/**
 * list_len - prints struct list length
 * @h: struct list length to be found
 *
 * Return: list length
 */

size_t list_len(const list_t *h)
{
	if (h)
	{

		if (h->next)
		{
			return (1 + list_len(h->next));
		}
		return (1);
	}
	return (0);
}
