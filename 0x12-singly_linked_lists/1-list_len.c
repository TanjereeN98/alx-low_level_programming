#include "lists.h"
#include <stdio.h>

/**
 * list_len - function to calculate  number of elements in a linked list
 * @h: pointer to the head of list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
