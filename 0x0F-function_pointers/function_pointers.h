#ifndef HEADER_F
#define HEADER_F
#include <stddef.h>
#endif
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int (*get_op_func(char *s))(int, int);
int _putchar(char c);
