#include "main.h"

/**
  * main - entry point
  * Return: 0
  */

int main(void)
{
	print_alphabet();
	_putchar('\n')
	return (0);
}

void print_alphabet(void);
{
	for (char i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
}
