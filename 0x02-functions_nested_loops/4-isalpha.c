#include "main.h"

/**
  * _isalpha - a function that checks for alphabetic character.
  * @c: input argument
  * Return: 1 if true and 0 if false.
  */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
