#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a program that multiplies two numbers.
 * @argc: number of command arguments
 * @argv: pointer to strings
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	if (argc >= 3)
	{
		int x = atoi(argv[1]);
		int y = atoi(argv[2]);
		int result = x * y;

		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
