#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: input string
 * @b: constant byte
 * @n: number of times
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		_putchar(b);
		s[i++];
	return (s);
}
