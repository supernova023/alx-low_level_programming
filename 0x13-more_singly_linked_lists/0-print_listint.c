#include "lists.h"

/**
 * print_listint - check the number of nodes in the lists
 * @h: list to check number of nodes
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}
	return (c);
}
