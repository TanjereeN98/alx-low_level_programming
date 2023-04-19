#ifndef INCLUDE_H
#define INCLUDE_H
#include "function_pointers.h"
#endif
/**
 * print_name - function to print a name
 * @name: the name to be printed
 * @f: pointer to print function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
