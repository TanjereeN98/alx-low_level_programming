#include "main.h"

/**
 * _strlen_recursion -  a function that returns the length of a string.
 * @s: input parameter pointer to char
 * Return: returns the length of the provided string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return ('\n');
}
