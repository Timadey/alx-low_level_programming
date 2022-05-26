#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - add a new node to the beginning of a listint_t
 * @head: a pointer to the pointer of the head node
 * @n: the number to be in the new node
 * Return: address of the new element or NULL if it fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
