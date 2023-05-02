#include "lists.h"
/**
 * free_listint2 -  function that frees a listint_t list.
 * @head: head pointer to the list
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (*head == NULL)
		return;
	temp = *head;
	while (temp != NULL)
	{
		current = temp->next;
		free(temp);
		temp = current;
	}
	*head = NULL;
}
