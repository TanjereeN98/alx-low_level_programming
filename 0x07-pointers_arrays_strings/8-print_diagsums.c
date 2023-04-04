#include <stdio.h>
#include "main.h"

/**
  * print_diagsums -  a function that prints the sum of the two diagonals
  * @a: pointer to array of ints
  * @size: size of array
  */

void print_diagsums(int *a, int size)
{
	int i, y, sum_1 = 0, sum_2 = 0;

	for (i = 0 ; i <= (size * size) ; i = i + size + 1)
		sum_1 = sum_1 + a[i];

	for (y = size - 1 ; y <= (size * size) - size; y = y + size - 1)
		sum_2 = sum_2 + a[y];
	printf("%d, %d\n", sum_1, sum_2);
}
