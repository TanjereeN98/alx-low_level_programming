#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: input parameter
 * @n: input parameter
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		if (i == n - 1)
			printf("%d\n", a[i]);
		else
			printf("%d, ", a[i]);
}

