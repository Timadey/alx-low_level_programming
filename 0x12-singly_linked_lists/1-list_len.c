#include "lists.h"
#include <stdlib.h>
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the head of the pointer
 * Return: num of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	const list_t *current = h;
	int count = 0;

	if (h == NULL)
		return (0);
	while (current != NULL)
	{
		count++;
		current = current->next;
	};
	return (count);
}
