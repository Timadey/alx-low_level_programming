#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: deletes a hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int size;
	unsigned long int index;
	hash_node_t **array;
	hash_node_t *node;

	if (ht == NULL)
		return;

	size = ht->size;
	array = ht->array;
	index = 0;

	while (index < size)
	{
		node = array[index];

		if (node != NULL)
			free_node(&node);
		index++;
	}
	free(array);
	free(ht);
}

/**
 * free_node - frees a hash_node_t linked list
 * @head: head of the node
 * Return: void
 */
void free_node(hash_node_t **head)
{
	hash_node_t *node = *head;

	if (node != NULL)
	{
		free_node(&(node->next));
		free(node->key);
		free(node->value);
		free(node);
	}
}
