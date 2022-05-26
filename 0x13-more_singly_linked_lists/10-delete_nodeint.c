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
/**
 * delete_nodeint_at_index - delete a new node at a given position
 * @head: pointer to the head of the list
 * @index: the position to insert the node
 * Return: 1 (SUCCESS) or -1 (FAIL)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous_node;
	listint_t *delete_node;
	unsigned int len = (unsigned int)listint_len(*head);

	if (*head == NULL && index == 0)
		return (-1);
	if (index > len - 1)
		return (-1);
	delete_node = get_nodeint_at_index(*head, index);
	previous_node = get_nodeint_at_index(*head, index - 1);
	if (previous_node == NULL)
		*head = delete_node->next;
	else
		previous_node->next = delete_node->next;
	delete_node->next = NULL;
	free(delete_node);
	return (1);
}
