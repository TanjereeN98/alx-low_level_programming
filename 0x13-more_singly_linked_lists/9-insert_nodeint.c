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
	listint_t *newNode, *temp, *p;
	unsigned int i;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	p = *head;
	for (i = 1 ; i < idx ; i++)
		p = p->next;
	temp = p->next;
	p->next = newNode;
	newNode->next = temp;
	newNode->n = n;
	return (newNode);
}


