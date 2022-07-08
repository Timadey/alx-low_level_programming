#include "lists.h"
/**
 * sum_dlistint - sum the data(n) of a dlistint_t list
 * @head: pointer to head of the list
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	size_t n = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		n += head->n;
		head = head->next;
	}
	return (n);
}
