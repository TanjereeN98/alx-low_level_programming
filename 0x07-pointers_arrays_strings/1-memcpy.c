#include "main.h"

/**
 * _memcpy -  a function that copies memory area.
 * @dest: destination string
 * @src: source string
 * @n: number of copied chars
 *
 * Return: returns pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
