#include <stdio.h>
#include "main.h"

/**
 * main - function
 * @argc: count of command arguments
 * @argv: array of pointers to strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
		printf("%s\n", argv[0]);
	return (0);
}
