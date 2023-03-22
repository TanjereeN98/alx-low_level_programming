#include <stdio.h>
#include "main.h"

/**
  * print_to_98 -  a function that prints all natural numbers from n to 98
  * @n: input parameter
  * Return: 0
  */

void print_to_98(int n)
{
	if (n != 98)
	{
		for ( ; n <= 98 ; n++)
	{
		printf("%d", n);
		if (n != 98)
			printf(", ");
	}

	for ( ; n >= 98 ; n--)
	{
		printf("%d", n);
		if (n != 98)
			printf(", ");
	}
	}
	else
		printf("%d", n);
	printf("\n");

}
