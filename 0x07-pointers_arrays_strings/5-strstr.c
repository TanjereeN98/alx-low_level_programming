#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @haystack: string to search withing
 * @needle: characters to search with
 *
 * Return: returns  a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, tmp, len = 0, x = 0, y = 0;

	while (needle[len])
		len++;

	for (i = 0 ; needle[i] != '\0' ; i++)
	{
		for (j = 0 ; haystack[j] != '\0' ; j++)
			if (needle[i] == haystack[j])
			{	y = j;
				x++;
				break;
			}
		if (x == 1)
			tmp = y;
	}
	if (len == x && x > 0)
		return (haystack + tmp);
	return ('\0');
}
