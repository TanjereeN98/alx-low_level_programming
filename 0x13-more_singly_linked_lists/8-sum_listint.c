#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data (n) of a list
 * @head: head pointer to the list
 * Return: 0 if empty or sum
 */
int sum_listint(listint_t *head)
{
	int result = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}
