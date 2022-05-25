#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds anew node to the beginning of a list_t list
 * @head: poniter to the pointer of the head of the list
 * @str: the string of the new list
 * Return: the address of the new element or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}
