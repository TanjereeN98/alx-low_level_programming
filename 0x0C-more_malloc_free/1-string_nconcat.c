#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: number of characters to concatenate from s2
 *
 * Return: NULL or ptr
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size, size2, i;
	char *ptr;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	for (size = 0 ; s1[size] != '\0' ; size++)
		;
	for (size2 = 0; s2[size2] != '\0' ; size2++)
		;

	if (n >= size2)
		n = size2;
	ptr = malloc((n + 1 + size) * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; i < size ; i++)
		ptr[i] = s1[i];
	for (i = 0 ; i < n ; i++)
		ptr[i + size] = s2[i];
	ptr[n + size] = '\0';
	return (ptr);
}
