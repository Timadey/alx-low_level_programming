#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * listint_len - calculate the number of elemn=ents in a list
 * @h: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	int nodes = 0;

	while (current != NULL)
	{
		current = current->next;
		nodes++;
	}
	return (nodes);
}
