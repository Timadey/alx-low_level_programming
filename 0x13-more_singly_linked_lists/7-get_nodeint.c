#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head of the list
 * @index: index of node being searched for
 * Return: the node at that index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int node = 0;

	while (current != NULL)
	{
		if (node == index)
			return (current);
		current = current->next;
		node++;
	};
	return (NULL);
}
