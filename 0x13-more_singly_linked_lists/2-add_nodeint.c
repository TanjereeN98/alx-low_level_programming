#include "lists.h"

/**
 * add_nodeint -  a function that adds a new node at the beginning of a list
 * @head: pointer to pointer to the list head
 * @n: data value
 * Return:  address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (*head == NULL)
		newnode->next = NULL;
	else
	{
		newnode->next = *head;
		*head = newnode;
	}
	return (newnode);
}
