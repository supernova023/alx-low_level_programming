#include "lists.h"

/**
 * get_nodeint_at_index - check through nodes in list, return node at index
 * @head: list to check nodes, and return data at index
 * @index: index value to search for
 * Return: data of node at index or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c = 0;

	while (head != NULL)
	{
		c++;
		if (c == index)
		{
			return (head);
		}
		head = head->next;
	}
	return (NULL);
}
