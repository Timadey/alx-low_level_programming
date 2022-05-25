#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - add a node at the end of a list
 * @head: pointer to the pointer of the head of the list
 * @str: the string in the new node
 * Return: address of the new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current = *head;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	};
	return (new);
}
