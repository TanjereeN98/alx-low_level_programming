#include "lists.h"

/**
 * add_nodeint_end -  function that adds a new node at the end of list
 * @head: header pointer of the list
 * @n: data value
 * Return: address of the new element or null
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lastnode, *current;

	lastnode = malloc(sizeof(listint_t));
	if (lastnode == NULL)
		return (NULL);
	lastnode->n = n;
	lastnode->next = NULL;
	if (*head == NULL)
		*head = lastnode;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = lastnode;
	}
	return (lastnode);
}
