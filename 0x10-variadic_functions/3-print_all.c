#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * format_char - format char
 * @separator: the string
 * @p: pointer of argument
 */
void format_char(char *separator, va_list p)
{
	printf("%s%c", separator, va_arg(p, int));
}
/**
 * format_int - format integer
 * @separator: the string
 * @p: pointer of argument
 */
void format_int(char *separator, va_list p)
{
	printf("%s%d", separator, va_arg(p, int));
}
/**
 * format_float - format float
 * @separator: the string
 * @p: pointer of argument
 */
void format_float(char *separator, va_list p)
{
	printf("%s%f", separator, va_arg(p, double));
}
/**
 * format_string - format string
 * @separator: the string
 * @p: pointer of argument
 */
void format_string(char *separator, va_list p)
{
	char *str = va_arg(p, char *);

	switch ((int)(!str))
	case 1:
		str = "(nil)";
		printf("%s%s", separator, str);
}
/**
 * print_all - prints anything we want of all type
 * @format: a list of types of arguments that we will parse through
 */

void print_all(const char * const format, ...)
{
	int n;
	int i = 0;
	va_list list;
	char *separator = "";
	op_t p[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(list, format);
	while (format && format[i])
	{
		n = 0;
		while (p[n].po)
		{
			if (format[i] == p[n].po[0])
			{
				p[n].f(separator, list);
				separator = ", ";
			}
			n++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}

