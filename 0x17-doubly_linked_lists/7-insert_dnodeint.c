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
	new_node->n = n;
	if (idx == 0)
	{
		free(new_node);
		return (add_dnodeint(h, n));
	}
	for (x = 0 ; x < idx - 1 && current ; x++)
		current = current->next;
	if (!current)
	{
		free(new_node);
		return (NULL);
	}
	if (!current->next)
	{
		free(new_node);
		return (add_dnodeint_end(h, n));
	}
	new_node->next = current->next;
	current->next = new_node;
	new_node->next->prev = new_node;
	new_node->prev = current;
	return (new_node);
}

