#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of the list
 * @idx: index to insert the new list
 * @n: the data(n) of the new list
 * Return: addressof the new list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *hi = *h;
	dlistint_t *new = NULL;
	dlistint_t *prev = NULL;
	unsigned int x = 0;


	if (*h == NULL)
		return (NULL);
	while (hi != NULL)
	{
		if (idx == x)
			break;
		hi = hi->next;
		x++;
	}
	if (hi == NULL && idx != 0)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = hi;
	prev = hi->prev;
	hi->prev = new;
	new->prev = prev;
	if (prev != NULL)
		prev->next = new;
	else
		*h = new;
	return (new);
}
