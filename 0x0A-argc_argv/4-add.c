#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _isdigit - a function that checks for a digit (0 through 9)
 * @c: input parameter.
 * Return: 1 if digit or 0 if not.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/**
 * main -  program that adds positive numbers.
 * @argc: count of command line arguments
 * @argv: pointer to strings
 * Return: returning 0 if success and 1 if fails
 */

int main(int argc, char *argv[])
{
	int count;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (count = 1 ; count < argc ; count++)
	{
		int j;

		for (j = 0 ; argv[count][j] != '\0' ; j++)
		{
		if (!_isdigit(argv[count][j]))
		{
			printf("Error\n");
			return (1);
		}
		}
		sum += atoi(argv[count]);
	}
	printf("%d\n", sum);
	return (0);
}
