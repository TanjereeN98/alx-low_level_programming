#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: 15 or -15 or 0.
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0, y = 0;

	while (s1[x])
		x++;
	while (s2[y])
		y++;
	if (x > y)
		return (15);
	else if (y > x)
		return (-15);
	else
		return (0);
}
