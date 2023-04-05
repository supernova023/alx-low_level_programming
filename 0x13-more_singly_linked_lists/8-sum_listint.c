#include "lists.h"

/**
 * sum_listint - find sum of list
 * @head: pointer to head of list to sum
 *
 * Return: sum of list or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
