#include "lists.h"

/**
 * pop_listint - free and clear head node and return data stored in head node
 * @head: pointer to head of list to remove head
 * Return: data from head
 */
int pop_listint(listint_t **head)
{
	int c = 0;
	listint_t *cnod;

	if (head == NULL)
	{
		return (0);
	}

	if (*head != NULL)
	{
		cnod = (*head)->next;
		c = (*head)->n;
		free(*head);
		*head = cnod;
	}
	return (c);
}
