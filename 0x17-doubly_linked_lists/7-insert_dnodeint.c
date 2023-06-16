#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a node at a specific index
 * @h: pointer to the head of the node
 * @idx: idx in which the node will be inserted
 * @n: data of the node
 * Return: pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *new_node = malloc(sizeof(dlistint_t));
	unsigned int x;

	if (!new_node)
		return (NULL);
	for (x = 0 ; x < idx && current ; x++)
		current = current->next;
	if (!current)
		return (NULL);
	new_node->n = n;
	new_node->next = current;
	new_node->prev = current->prev;
	current->prev = new_node;
	return (new_node);
}

