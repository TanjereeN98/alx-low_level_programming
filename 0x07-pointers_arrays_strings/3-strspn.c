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
	int i, j, len = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
			if (s[i] == accept[j])
				break;
		if (s[i] != accept[j])
			break;
		len++;
	}
	return (len);
}
