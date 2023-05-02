#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts new node at given position.
 * @head: pointer to the head of the list
 * @idx: index of the inserted node
 * @n: data that will be inserted
 * Return: NULL if it fails or address or the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *p;
	unsigned int i;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (!*head && idx == 0)
	{
		*head = newNode;
		newNode->next = NULL;
		return (newNode);
	}
	else if (!*head && idx > 0)
		return (NULL);
	else if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	p = *head;
	for (i = 1 ; i < idx ; i++)
	{
		if (p)
			p = p->next;
		else
			return (NULL);
	}
	newNode->next = p->next;
	p->next = newNode;
	return (newNode);
}
