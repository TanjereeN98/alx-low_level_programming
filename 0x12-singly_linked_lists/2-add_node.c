#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * add_node - function that adds a new node at the beginning of a list
 * @head: the address of the list head
 * @str: string that will be added in the node
 * Return: returns the head pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len = 0;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;
	return (*head);
}
