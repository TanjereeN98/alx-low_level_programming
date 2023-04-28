#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - function that adds a new node at the end of a list
 * @head: address of the list head
 * @str: string for the list
 * Return: returns pointer to the new list or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;
	int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}
	return (new);
}
