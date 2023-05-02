#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of list
 * @head: head pointer of a list
 * @index: index of the target node
 * Return: NULL if not found or the pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0 ; i < index ; i++)
	{
		if (head->next != NULL)
			head = head->next;
		else
			return (NULL);
	}
	return (head);
}
