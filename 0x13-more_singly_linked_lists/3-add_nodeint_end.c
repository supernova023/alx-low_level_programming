#include "lists.h"

/**
 * add_nodeint_end - add node to end of the list
 * @head: pointer to head node
 * @n: value to add as last node
 * Return: address of new node or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nnode = malloc(sizeof(listint_t));
	listint_t *lnode = *head;

	if (nnode == NULL)
	{
		return (NULL);
	}
	nnode->n = n;
	nnode->next = NULL;

	if (*head == NULL)
	{
		*head = nnode;
		return (nnode);
	}

	while (lnode->next != NULL)
	{
		lnode = lnode->next;
	}
	lnode->next = nnode;
	return (nnode);
}
