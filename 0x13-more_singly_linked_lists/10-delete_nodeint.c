#include "lists.h"

/**
 * delete_nodeint_at_index - check through nodes in list, delete node at index
 * @head: pointer to head of list to check nodes
 * @index: index value to search for
 * Return: 1 on success , -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int c = 0;
	listint_t *nnode = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);

	while (c < idx)
	{
		if (head == NULL)
			return (NULL);
		c++;
		(*head) = (*head)->next;
	}
	if (idx == 0)
	{
		nnode->next = *head;
		nnode->n = n;
		*head = nnode;
		return (nnode);
	}
	else
	{
		
		(*head) = (*head)->next;
		if (head == NULL)
		{
			return (NULL);
		}
		else
		{
			nnode->next = *head;
			nnode->n = n;
			*head = nnode;
			return (nnode);
		}
	}

	return (NULL);
}
