#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	int nodes = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		nodes++;
	}
	return (nodes);
}
