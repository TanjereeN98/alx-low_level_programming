#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function to print the given numbers with seperator
 * @separator: as the name suggests
 * @n: number of input argumnents
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	for (i = 0 ; i < n ; i++)
	{
		if (separator == NULL)
			printf("%d", va_arg(list, int));
		else
			printf("%d%s", va_arg(list, int), separator);
	}
	va_end(list);
	printf("\n");
}


