#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * sum_listint - sum all the data(n) of a listint_t list
 * @head: pointer to the head of the list
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
