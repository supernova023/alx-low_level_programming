#include "lists.h"

/**
 * listint_len - check the number of nodes in the lists
 * @h: list to check number of nodes
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
