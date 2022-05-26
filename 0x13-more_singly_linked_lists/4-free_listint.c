#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head of the list_t list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *next;
	listint_t *current;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	};
}
