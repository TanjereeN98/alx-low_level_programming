#include "lists.h"
/**
 * delete_nodeint_at_index - function to deletes the node at index idx of list
 * @head: head pointer to the list
 * @index: index of the node
 * Return: 1 if succeed -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *checker;
	unsigned int i;

	if (*head == NULL || head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (i = 1 ; i < index ; i++)
	{
		if (temp->next)
			temp = temp->next;
		else
			return (-1);
	}
	checker = temp->next;
	if (checker->next == NULL)
	{
		temp->next = NULL;
		free(checker);
		return (1);
	}
	temp->next = checker->next;
	free(checker);
	return (1);
}
