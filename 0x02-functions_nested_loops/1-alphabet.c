#include<main.h>

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
	for (i = 'a' ; i < 'z' ; i++)
		putchar(i);
}
