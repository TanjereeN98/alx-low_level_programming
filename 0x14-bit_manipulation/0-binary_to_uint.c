#include "main.h"

/**
 * binary_to_uint - function  that converts a binary number to an unsigned int
 * @b: pointer to the string
 * Return: 0 if it fails or integer if success
 */
unsigned int binary_to_uint(const char *b)
{
	int x = 0, y = 0, temp = 0;
	unsigned int result = 0;

	if (!b)
		return (0);
	while (b[y])
	{
		if (b[y] != '0' && b[y] != '1')
			return (0);
		y++;
	}
	while (b[x])
	{
		if (b[x] == '1')
		{
			temp = 1 << (y - x - 1);
			result += temp;
		}
		x++;
	}
	return (result);
}
