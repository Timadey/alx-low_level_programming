#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: a pointer to the head of the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
