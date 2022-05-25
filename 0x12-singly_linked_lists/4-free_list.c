#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list_t list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *next;
	list_t *current;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	};
}
