#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - add a new node at the end of a listint_t list
 * @head: head of the list
 * @n: the number to be in the new list
 * Return: address of the new elementor NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
	return (new);
}
