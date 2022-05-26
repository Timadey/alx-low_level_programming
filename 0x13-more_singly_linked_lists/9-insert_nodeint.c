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
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head of the list
 * @idx: the position to insert the node
 * @n: data(n) of the new node
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *node_at_idx;
	unsigned int len = (unsigned int)listint_len(*head);

	if (*head == NULL)
		return (NULL);
	if (idx > len - 1)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	node_at_idx = get_nodeint_at_index(*head, idx);
	new->next = node_at_idx;
	node_at_idx = get_nodeint_at_index(*head, idx - 1);
	if (node_at_idx == NULL)
		*head = new;
	else
		node_at_idx->next = new;
	return (new);
}
