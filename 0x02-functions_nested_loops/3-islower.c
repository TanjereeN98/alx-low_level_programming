#include "main.h"

/**
  * _islower - a function that checks for lowercase character
  * @c: input to the function
  * Return: 1 if true or 0 if false
  */

int _islower(int c)
{
	int i = 'a';
	int y = 'z';

	if (c >= i && c <= y)
		return (1);

	return (0);
}
