#include "lists.h"
/**
 * get_dnodeint_at_index - gets the nth node of a dlistint_t linked list
 * @head: head of the linked list
 * @index: index that we will get
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int x;

	for (x = 0 ; x < index && current; x++)
		current = current->next;
	if (!current)
		return (NULL);
	return (current);
}
