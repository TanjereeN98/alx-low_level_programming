#include "search_algos.h"

/**
* exponential_search -	function that searches for a value in
* an array of integers using the exponential search algorithm
* @array: array of integers
* @size: size of array
* @value: value that i searched in array
* Return: return the index of value, and if it doesn't exist return -1
*/
int exponential_search(int *array, size_t size, int value)
{
	int index, prev;

	if (!array || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);
	for (index = 1; index <= (int)size; index = index * 2)
	{
		if (value <= array[index])
			break;
		prev = index;
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
	}
	if (index >= (int)size)
		index = (int)size - 1;
	printf("Value found between indexes [%d] and [%d]\n", prev, index);
	index = binary_search(array + prev, index - prev + 1, value);
	if (index < (int)size && index >= 0)
		return (index + prev);
	else
		return (-1);
}
/**
* binary_search - function that searches for a value in
* an array of integers using the binary search algorithm
* @array: array of integers
* @size: size of array
* @value: value that i searched in array
* Return: return the index of value, and if it doesn't exist return -1
*/
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = (int)size - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;

		printf("Searching in array: ");
		print_arr(array, left, right);
		if (array[mid] == value)
			return (mid);
		if (value <= array[mid])
			right = mid - 1;
		else if (value > array[mid])
			left = mid + 1;
	}
	return (-1);
}
/**
* print_arr - print array from start and end
* @array: array of integers
* @s: start index of array
* @e: end index of array
*/
void print_arr(int *array, size_t s, size_t e)
{
	size_t i;

	for (i = s; i < e; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[e]);
}
