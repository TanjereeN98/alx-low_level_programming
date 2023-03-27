#include "main.h"

/**
 * _strlen - a function to get length
 * @s: input parameter
 * Return: return i
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}
