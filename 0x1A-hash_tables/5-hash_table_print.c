#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 * Return: prints the key/value in the order that they appear on tha hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size;
	unsigned long int index;
	hash_node_t *node;
	unsigned long int count;
	hash_node_t **array;

	if (ht == NULL)
		printf("{}\n");
	else
	{
		size = ht->size;
		array = ht->array;
		index = 0;

		printf("{");
		count = 0;
		while (index < size)
		{
			node = array[index];

			if (node != NULL)
			{
				if (count > 0)
					printf(", ");
				else
					count++;
				while (node != NULL)
				{
					printf("'%s': '%s'", node->key, node->value);
					node = node->next;
				}
			}
			index++;
		}
		printf("}\n");
	}
}
