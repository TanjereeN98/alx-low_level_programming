#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: initial string
 * @accept: matching characters
 *
 * Return: returns the number
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, x, len = 0;

	for (i = 0 ; accept[i] >= '\0' ; i++)
	{
	for (x = 0 ; s[x] >= '\0' ; x++)
	{
		if (s[x] == accept[i])
			len++;
	}
	}
	return (len);
}
