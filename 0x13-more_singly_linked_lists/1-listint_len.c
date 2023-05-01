#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: head pointer to the list.
 * Return: length of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
