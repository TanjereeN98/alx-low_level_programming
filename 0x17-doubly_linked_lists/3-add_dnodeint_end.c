#include "lists.h"
/**
 * add_dnodeint_end - add a node at the end of a list
 * @head: pointer to a head of thelist
 * @n: data of the new node
 * Return: return the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head, *end = malloc(sizeof(dlistint_t));

	if (!end)
		return (NULL);
	end->n = n;
	if (!*head)
	{
		*head = end;
		return (*head);
	}
	while (current->next)
		current = current->next;
	current->next = end;
	end->prev = current;
	return (end);
}
