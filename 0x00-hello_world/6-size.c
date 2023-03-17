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

	printf("Size of a char: %lu byte(s)\n", unsigned long sizeof(var_1));
	printf("Size of an int: %lu byte(s)\n", unsigned long sizeof(var_2));
	printf("Size of a long int: %lu byte(s)\n", unsigned long sizeof(var_3));
	printf("Size of a long long int: %lu byte(s)\n", unsigned long sizeof(var_4));
	printf("Size of a float: %lu byte(s)\n", unsigned long sizeof(var_5));
	return (0);
}
