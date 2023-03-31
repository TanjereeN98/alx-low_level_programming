#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * @str: input string
 * Return: returing the capitalized version
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
	if (str[i - 1] == ' ' ||
	str[i - 1] == '\t' ||
	str[i - 1] == '\n' ||
	str[i - 1] == '.' ||
	str[i - 1] == ',' ||
	str[i - 1] == '"' ||
	str[i - 1] == ';' ||
	str[i - 1] == '(' ||
	str[i - 1] == ')' ||
	str[i - 1] == '!' ||
	str[i - 1] == '?' ||
	str[i - 1] == '{' ||
	str[i - 1] == '}' ||
	index == 0)
		str[i] -= 32;
	i++;
	}
	return (str);
}
