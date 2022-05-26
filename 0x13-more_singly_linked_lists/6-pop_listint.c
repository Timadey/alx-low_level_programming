#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head of the list
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *curr_head = *head;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	*head = (*head)->next;
	free(curr_head);
	return (n);
}
