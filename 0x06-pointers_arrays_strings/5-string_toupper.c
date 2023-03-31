#include "main.h"

/**
 * string_toupper -  a function that changes all lowercase letters to upper
 * @str: input str
 * Return: returning char
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
