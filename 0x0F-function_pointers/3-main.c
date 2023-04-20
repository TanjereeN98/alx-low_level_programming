#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - main function
 * @argc: number of arguments
 * @argv: function array of arguments
 * Return: result
 */

int main(int argc, char **argv)
{
	int result;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (atoi(argv[3]) == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	ptr = get_op_func(argv[2]);
	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = ptr(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
