#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a specific node at given index
 * @head: pointer to the head of the node
 * @index: index of the node that will be deleted
 * Return: 1 on success -1 on fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur = *head;
	unsigned int x;

	for (x = 0 ; x < index && cur ; x++)
		cur = cur->next;
	if (!cur)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(cur);
		return (1);
	}
	if (!cur->next)
	{
		cur->prev->next = NULL;
		free(cur);
		return (1);
	}
	cur->prev->next = cur->next;
	cur->next->prev = cur->prev;
	free(cur);
	return (1);
}
