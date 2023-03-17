#include<stdio.h>
/**
* main - Entry Point
* Return: value 0
*/
int main(void)
{
	char var_1;
	int var_2;
	long int var_3;
	long long int var_4;
	float var_5;

	printf("Size of a char: %d byte(s)\n", sizeof(var_1));
	printf("Size of an int: %d byte(s)\n", sizeof(var_2));
	printf("Size of a long int: %d byte(s)\n", sizeof(var_3));
	printf("Size of a long long int: %d byte(s)\n", sizeof(var_4));
	printf("Size of a float: %d byte(s)\n", sizeof(var_5));
	return (0);
}
