#include<stdio.h>

/**
  * main - Entry point
  * Return: 0
  */

int main(void)
{
	char word[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		putchar(word[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
