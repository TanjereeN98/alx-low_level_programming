#include "lists.h"

/**
 * listint_len - function that prints all the elements of a listint_t list.
 * @h: the head pointer to list to be printed
 * Return: number of elements of the list
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
