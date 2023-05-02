#include "lists.h"

/**
 * free_listint2 - delete a linked list
 * @head: head ofthe linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (*head == NULL || head == NULL)
	{
		return;
	}
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
