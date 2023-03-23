#include "main.h"

/**
  * _isupper -  a function that checks for uppercase character.
  * @c: input variable
  * Return: 1 if upper case or 0 if lower.
  */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
