#include <stdlib.h>
#include "main.h"
/**
 * str_concat - function that concatenates two strings.
 * @s1: 1st string
 * @s2: 2nd string
 * Return: returning the pointer to the new string
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, i, j;
	char *ptr;

	for (size1 = 0 ; s1[size1] != '\0' ; size1++)
		;
	for (size2 = 0 ; s2[size2] != '\0' ; size2++)
		;
	ptr = malloc((size1 + size2 + 1) * sizeof(*s1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0 ; i < size1 ; i++)
		ptr[i] = s1[i];
	for (j = 0 ; j < size2 ; j++)
		ptr[i + j] = s2[j];
	return (ptr);
}
