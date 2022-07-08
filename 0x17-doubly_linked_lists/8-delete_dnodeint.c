#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index "index"
 * of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of pointer to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *hi = *head;
	dlistint_t *prev;
	dlistint_t *next;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	while (hi != NULL)
	{
		if (index == x)
			break;
		hi = hi->next;
		x++;
	}
	if (hi == NULL)
		return (-1);

	if (index == 0)
	{
		next = hi->next;
		if (next != NULL)
			next->prev = NULL;
		(*head)->next = NULL;
		free(*head);
		*head = next;
		return (1);
	}

	prev = hi->prev;
	next = hi->next;
	prev->next = next;
	if (next != NULL)
		next->prev = prev;
	hi->next = NULL;
	hi->prev = NULL;
	free(hi);

	return (1);
}
