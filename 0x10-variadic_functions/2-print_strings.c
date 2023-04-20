#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - functionthat prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;

	va_start(list, n);

	for (i = 0 ; i < n ; i++)
	{
		str = va_arg(list, char*);
		if (str == NULL)
			printf("nil");
		else
			printf("%s", str);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
