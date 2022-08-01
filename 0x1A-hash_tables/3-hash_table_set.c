#include "hash_tables.h"

/**
 * hash_table_set - add an element to the hash table
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

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (0);
	if (ht->array == NULL)
		return (0);

	array = ht->array;
	index = key_index((const unsigned char *)key, ht->size);

	node = array[index];
	if (node == NULL)
	{
		if ((array[index] = create_node(key, value)) ==  NULL)
			return (0);
		return (1);
	}
	while (node != NULL)
	{
		if (strcmp(key, node->key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}
	node = array[index];
	if ((array[index] = create_node(key, value)) == NULL)
		return (0);
	array[index]->next = node;
	return (1);
}

/**
 * create_node - creates a new node with the value provided
 * @key: key of the node
 * @value: value of the node
 * Return: the new node created
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t *));

	if (new_node == NULL)
		return (NULL);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	return (new_node);
}
