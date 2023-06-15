#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current)
	{
		head = current->next;
		free(current);
		current = head;
	}
}

