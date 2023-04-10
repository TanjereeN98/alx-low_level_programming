#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints all arguments it receives.
 * @argc: number of command arguments
 * @argv: pointer to strings
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc >= 1)
	{
		for (i = 0; i < argc ; i++)
			printf("%s\n", argv[i]);
	}
	return (0);
}
