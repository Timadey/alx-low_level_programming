#include "lists.h"
/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to the head of the list
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t nodes = 0;

	if (h == NULL)
		return (nodes);
	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current->len, current->str);
		nodes++;
		current = current->next;
	};
	return (nodes);
}
