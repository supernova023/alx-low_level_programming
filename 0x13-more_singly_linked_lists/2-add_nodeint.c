#include "lists.h"

/**
 * add_nodeint - add node to start of list
 * @head: pointer to head of list before adding new node
 * @n: value to add to front of list
 * Return: address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nnode = malloc(sizeof(listint_t));

	if (nnode == NULL)
	{
		return (NULL);
	}
	nnode->n = n;
	nnode->next = *head;
	*head = nnode;
	return (nnode);
}
