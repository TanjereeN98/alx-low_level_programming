#include "main.h"

/**
  * _islower - a function that checks for lowercase character
  * Return: 0
  */

int _islower(int c)
{
	int i = 'a';
	int y = 'z';

	if (c >= i && c <= y)
		return (1);

	return (0);
}
