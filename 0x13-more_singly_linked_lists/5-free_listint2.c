#include "lists.h"

/**
 * free_listint2 - free and clear list
 * @head: list to clear
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *cnod;

	while (*head != NULL)
	{
		cnod = *head;
		*head = (*head)->next;
		free(cnod);
	}
	*head = NULL;
}
