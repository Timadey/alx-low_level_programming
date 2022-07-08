#include "lists.h"
/**
 * print_dlistint - print a dlistint_t list
 * @h: a pointer to the head of the list
 * Return: the number of nodes int the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
