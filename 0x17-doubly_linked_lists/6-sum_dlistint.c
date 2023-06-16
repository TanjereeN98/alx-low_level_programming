#include "lists.h"
/**
 * sum_dlistint - get the sum of a linked list
 * @head: head of the list
 * Return: sum of the list
 */
int sum_dlistint(dlistint_t *head)
{
	int res = 0;
	dlistint_t *current = head;

	while (current)
	{
		res += current->n;
		current = current->next;
	}
	return (res);
}
