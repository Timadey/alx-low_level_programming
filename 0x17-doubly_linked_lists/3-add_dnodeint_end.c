#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: a pointer to the head
 * @n: data for the new node
 * Return: the new node added
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *curr = *head;
	dlistint_t *prev = NULL;
	dlistint_t *new = NULL;

	while (curr != NULL)
	{
		prev = curr;
		curr = curr->next;
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->prev = prev;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
		prev->next = new;

	return (new);
}
