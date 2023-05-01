#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list
 * @head: pointer to the list header
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
