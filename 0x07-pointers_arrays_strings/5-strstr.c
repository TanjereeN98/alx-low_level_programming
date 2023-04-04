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
	char *t1 = haystack;
	char *t2 = needle;

	while (*haystack != '\0')
	{
		t1 = haystack;
		t2 = needle;

		while (*t1 != '\0' && *t2 != '\0' && *t1 == *t2)
		{
			t1++;
			t2++;
		}
		if (*t2 == '\0')
			return (haystack);
		haystack++;
	}
	return ('\0');
}
