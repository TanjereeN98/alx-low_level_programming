#include "function_pointers.h"

/**
 * array_iterator - func that executes a funct given as parameter on array
 * @array: the array that we will iterate thorugh
 * @size: size of the array
 * @action: pointer to the function we will receive
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	 size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0 ; i < size ; i++)
		action(array[i]);
}
