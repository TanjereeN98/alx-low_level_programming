#include <stdio.h>

/**
  * main - Entry Point
  * Return: 0
  */

int main(void)
{
	for (i = 1 ; i <= 100 ; i++)
		if (i == 100)
			printf("FizzBuzz\n");
		else if (i % 15 == 0)
			printf("FizzBuzz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", i);
}
