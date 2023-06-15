#include "lists.h"
/**
 * dlistint_len - print the len of the list
 * @h: head of the list
 * Return: len of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *current = h;

	while (current)
	{
		len++;
		current = current->next;
	}
	return (len);
}
