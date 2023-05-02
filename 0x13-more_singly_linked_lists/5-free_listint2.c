#include "lists.h"
/**
 * free_listint2 -  function that frees a listint_t list.
 * @head: head pointer to the list
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	temp = *head;
	while (*head != NULL)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
	*head = temp;
	*head = NULL;
}
