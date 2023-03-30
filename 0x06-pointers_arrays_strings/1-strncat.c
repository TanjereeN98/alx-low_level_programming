#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: first string and the destination
 * @src: second string that will be concatenated
 * @n: number of bytes that will be concatenated
 *
 * Return: returns the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int x;

	while (src[i])
		i++;
	for (x = 0 ; x < n && src[x] != '\0' ; x++)
		dest[i + x] = src[x];
	dest[i + x] = '\0';
	return (dest);
}
