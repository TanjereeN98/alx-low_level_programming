#include "lists.h"
#include <stdio.h>
/**
 * print_list - function to print all elements of list_t list
 * @h: pointer to the printed list
 * Return: returns size_t
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	       	h = h->next;
		i++;
	}
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
