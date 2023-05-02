#include "lists.h"
/**
 * pop_listint - functionthat deletes the head node of a list
 * @head: head pointer to list
 * Return: 0 if list is empty or data if not
 */
int pop_listint(listint_t **head)
{
	int temp_data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	temp_data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (temp_data);
}
