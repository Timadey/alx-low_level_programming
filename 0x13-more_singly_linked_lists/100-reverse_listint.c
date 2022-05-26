#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: head of the list
 * Return: a poniter to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next;
	listint_t *current;

	if (*head == NULL)
		return (*head);
	next = (*head)->next;
	(*head)->next = NULL;
	current = next;
	while (current != NULL)
	{
		next = current->next;
		current->next = *head;
		*head = current;
		current = next;
	};
	return (*head);
}
