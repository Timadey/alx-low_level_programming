#include "hash_tables.h"

/**
 * add an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key can not be an empty string
 * @value: the value associated with the key. value must be duplicated.
 * value can be an empty string
 * Return: 1 if it succeeded 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t **array;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (0);
	if (ht->array == NULL)
		return (0);

	array = ht->array;
	index = key_index(key, ht->size);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = key;
	new_node->value = value;
	new_node->next = NULL;

	if ((array + index) == NULL)
	{
		array[index] = new_node;
		return (1);
	}
	else
	{
		node = array[index];
		while (node->next != NULL)
			node = node->next;
		node->next = new_node;
		return (1);
	}
}
