#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: input string
 * @c: input character
 *
 * Return:  a pointer to the first occurrence of the character c in the string
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
			return (s + i\n);
	}
	return ((void *)0);
}
