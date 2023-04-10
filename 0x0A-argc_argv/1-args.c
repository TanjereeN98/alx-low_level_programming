#include "main.h"
#include <stdio.h>
/**
 * main - a program that prints the number of arguments passed into it
 * @argc: number of comamnd arguments
 * @argv: pointer to string
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	if (argv)
		printf("%d\n", argc - 1);
	return (0);
}

