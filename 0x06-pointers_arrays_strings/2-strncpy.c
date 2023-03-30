#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @dest: first string and the destination
 * @src: second string that will be concatenated
 * @n: number of bytes that will be concatenated
 *
 * Return: Return a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	for (; i < n ; i++)
		dest[i] = '\0';
	return (dest);
}
