#include "main.h"

/**
 * _strcat - function to concatenate two strings.
 * @dest: first string and the destination
 * @src: second string that will be concatenated
 *
 * Return: returns the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int x;

	while (src[i])
		i++;
	for (x = 0 ; x < i && src[x] != '\0' ; x++)
		dest[i + x] = src[x];
	dest[i + x] = '\0';
	return (dest);
}
