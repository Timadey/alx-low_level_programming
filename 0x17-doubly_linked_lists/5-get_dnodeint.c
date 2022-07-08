#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node oa dlistint_t list
 * @head: pointer to the head of the list
 * @index: index of the node startings from 0
 * Return: address to the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (n == index)
			return (head);
		head = head->next;
		n++;
	}
	return (NULL);
}
