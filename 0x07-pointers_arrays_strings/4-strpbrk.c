#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: the string
 * @accept: set of characters
 *
 * Return: returns the pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, len = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
			if (*(s + i) == *(accept + j))
			{
				len = i;
				return (s + len);
			}
	}
	return (0);
}
