#include "main.h"

/**
 * swap_int - swapping function
 *@a: first pointer parameter
 *@b: Second pointer parameter
 */

void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;

	*a = y;
	*b = x;
}
