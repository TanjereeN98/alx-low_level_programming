#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to.
 * @key: the key.
 * @value:  is the value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *curr_node;
	unsigned long int idx;
	
	if (!ht || !key || !value || *key == '\0')
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[idx] == NULL)
	{
		node = malloc(sizeof(hash_node_t));
		if (!node)
			return (0);
		node->key = strdup(key);
		if (!(node->key))
		{
			free(node);
			return (0);
		}
		node->value = strdup(value);
		if (!(node->value))
		{
			free(node->key);
			free(node);
			return (0);
		}
		node->next = NULL;
		return (1);
	}
	curr_node = ht->array[idx];
	while (curr_node)
	{
		if (strcmp(curr_node->key, key) == 0)
		{
			free(curr_node->value);
			curr_node->value = strdup(value);
			return (1);
		}
		curr_node = curr_node->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (!node)
        	return (0);
	node->key = strdup(key);
	if (!(node->key))
	{
        	free(node);
        	return (0);
	}
	node->value = strdup(value);
	if (!(node->value))
	{
        	free(node->key);
        	free(node);
        	return (0);
	}
	node->next = ht->array[idx];
	ht->array[idx] = node;
	return (1);
}
