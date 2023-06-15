#include "lists.h"
/**
 * print_dlistint - prints double linked list
 * @h: head of the linked list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *c = h;
	size_t count = 0;

	while (c)
	{
		printf("%d\n", c->n);
		c = c->next;
		count++;
	}
	return (count);
}

